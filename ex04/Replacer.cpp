#include "Replacer.hpp"
#include <iostream>
#include <fstream> //needed for ifstream and ofstream

Replacer::Replacer(std::string fileName, std::string toReplace, std::string replacement)
	: _fileName(fileName), _toReplace(toReplace), _replacement(replacement)
{

}

Replacer::~Replacer()
{

}

/*
	In C++, whenever the scope of a stack allocated object ends,
	its destructor is called automatically and no memory is leaked.
	If an object is created with the new keyword, it is allocated
	on the heap and must be freed with delete.

	find(); -takes the string to find as an argument, and the position
	to begin searching as an optional second argument
	erase(); -takes pos to start deleting and number of chars 
	to delete as arguments
	insert(); -takes pos to insert into, and string to insert as arguments
	note: using '\n' instead of std::endl is more efficient, since it doesn't
	force a buffer flush every time.
	*/

int Replacer::doTheThing(void)
{
	if (_toReplace.empty())
	{
		std::cerr << "Error: string to replace can't be empty!" << std::endl;
		return 1;
	}
	std::ifstream	inFile(_fileName);
	if(!inFile.is_open())
	{
		std::cerr << "Error: can't open source file!" << std::endl;
		return 1;
	}
	std::ofstream	outFile(_fileName + ".replace");
	if(!outFile.is_open())
	{
		std::cerr << "Error: can't create destination file!" << std::endl;
		inFile.close();
		return 1;
	}

	std::string	line;
	while (getline(inFile, line))
	{
		size_t	pos = 0;
		while ((pos = line.find(_toReplace, pos)) != std::string::npos)
		{
			line.erase(pos, _toReplace.length());
			line.insert(pos, _replacement);
			pos += _replacement.length();
		}
		outFile << line << '\n';
	}

	inFile.close();
	outFile.close();
	return 0;
}