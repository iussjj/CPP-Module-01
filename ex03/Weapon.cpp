#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type) : type(type)
{

}

Weapon::~Weapon()
{

}

void Weapon::setType(const std::string &type)
{
	this->type = type;
}

/*
	the function prototype tells the compiler that we are returning
	a reference, so no '&' is needed in the return statement
*/

const std::string	&Weapon::getType(void) const
{
	return this->type;
}