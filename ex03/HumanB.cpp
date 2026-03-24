#include "HumanB.hpp"
#include <iostream>

/*
	Note on dot . and arrow -> operators: . is used with actual objects and
	references:
	this->weapon.getType()

	for pointers the arrow operator -> is used:
	this->weapon->getType()

	-Use const Object &obj when a function just needs to look at data or read from it.
	-Use Object &obj (without const) when a function needs to modify the original object,
	or in this case, store its memory address in a non-const pointer.
*/

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = nullptr;
}

HumanB::~HumanB()
{

}

void HumanB::attack(void)
{
	
	std::cout << this->name << " attacks with their ";
	if (this->weapon)
	{
		std::cout << this->weapon->getType();
	}
	else
	{
		std::cout << "bare hands";
	}
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}