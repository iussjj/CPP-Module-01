#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*
	The extra curly braces {} define local scope: this affects
	the lifespan of variables and object instances. When exiting
	local scope, all local variables and created objects are destroyed
*/

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
