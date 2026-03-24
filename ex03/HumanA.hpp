#pragma once
#include "Weapon.hpp"
#include <string>

/*
	the attribute 'weapon' must be a reference, otherwise
	it won't update when the value pointed to by the passed
	reference changes

	because of this, the default constructor must not be defined:
	a reference must always point to something, and an uninitialized
	reference (as with the default constructor) will cause a compiler
	error
*/

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;


public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack(void);
};
