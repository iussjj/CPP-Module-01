#include "Zombie.hpp"

/*
	Because the Zombie instance is created without the new
	keyword, it's allocated on the stack and lives only within
	the scope of this function. The instance is destroyed when
	the function finishes.
*/

void	randomChump(std::string name)
{
	Zombie stack_zombie(name);
	stack_zombie.announce();
}