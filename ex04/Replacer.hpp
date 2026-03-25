#pragma once

#include <string>

class Replacer
{
private:
	std::string _fileName;
	std::string _toReplace;
	std::string _replacement;

public:
	Replacer(std::string fileName, std::string toReplace, std::string replacement);
	~Replacer();

	int	doTheThing(void);
};