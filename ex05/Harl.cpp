#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	
}

Harl::~Harl(void)
{

}

void Harl::debug(void)
{
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-"
				<< "triple-pickle-special-ketchup burger. I really do!"
				<< std::endl;
}

void Harl::info(void)
{
	std::cout	<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn't put enough bacon in my burger! If you did, "
				<< "I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout	<< "I think I deserve to have some extra bacon for free. "
				<< "I've been coming for years, whereas you started working "
				<< "here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

/*
	Syntax of the member function pointer array:
	1. funcs[4] = array named funcs with 4 objects
	2. Harl::* = pointer to item(s) belonging to the Harl class
	Harl::*funcs[4] = array named funcs with 4 objects, pointing to
	things strictly within the Harl class
	3.void(...)(void) = functions I point to must return void, and
	take no arguments (void)
	4. = {&Harl::debug, ...} = memory address of method inside
	class definition
*/

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info,
										&Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])(); // pointer to member operator
			return;
		}
	}
	std::cout 	<< "Why thank you good Sir or Madam, this has been "
				<< "a most pleasant exchange! (level not found)"
				<< std::endl;
}
