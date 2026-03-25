#include <iostream>
#include "Replacer.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: invalid number of arguments!" << '\n';
		std::cerr << "Expected: input file, string to replace, replacement string" << std::endl;
		return 1;
	}
	Replacer replacer(argv[1], argv[2], argv[3]);
	if (replacer.doTheThing() == 1)
		return 1;
	return 0;
}