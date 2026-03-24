#include "HumanA.hpp"
#include <iostream>

/*
	Initialization list necessary to avoid compiler error,
	since HumanA has a reference attribute that may not be
	undefined at any time.
	Also, it's The C++ Way 🇺🇸

	Note on dot . and arrow -> operators: . is used with actual objects and
	references:
	this->weapon.getType()

	for pointers the arrow operator -> is used:
	this->weapon->getType()
*/

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{

}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}