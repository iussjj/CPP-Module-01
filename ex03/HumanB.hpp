#pragma once
#include "Weapon.hpp"
#include <string>

/*
	HumanB can also be unarmed, so the weapon attribute cannot
	be a reference: a reference must always point to something.
	Because of the syntax requirements of the subject's main
	and because we want the weapon type to be updated, we are
	!passing by reference and storing as a pointer
*/

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;


public:
	//no default constructor needed, since HumanB always has a name
	HumanB(std::string name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon &weapon); //passing by reference
};
