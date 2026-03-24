#include <iostream>
#include <string>

/*
	Pointers work just like in C. References are new in C++.
	A reference cannot be NULL or nullptr and once assigned,
	it can't be changed.
	Advantages are safety (the object pointed to is guaranteed
	to actually exist -> no need to constantly check for NULL),
	cleanness of syntax and efficiency.
	Passing by reference passes the memory address and doesn't
	copy anything. It's fast, safe and clean:
	void printBook(PhoneBook &book)
	"Use references whenever you can, and pointers only when you
	have to."
*/

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of str:\t\t" << &str << std::endl;
	std::cout << "Memory address of stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Memory address of stringREF:\t" << &stringREF <<std::endl;
	std::cout << std::endl;
	std::cout << "Value of str variable:\t\t" << str << std::endl;
	std::cout << "Value pointed to by stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:\t" << stringREF << std::endl;
	return 0;
}
