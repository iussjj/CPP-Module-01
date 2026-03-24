#include "Zombie.hpp"

/*
	The keyword 'new' allocates memory for the object from the heap,
	then calls the class constructor. Instances created with it must
	be manually destroyed with the keyword 'delete' to avoid memory
	leaks!

	NOTE: this could also be condensed to return new Zombie(name);
	(new returns a pointer, so an asterisk is not necessary)
*/

Zombie *newZombie(std::string name)
{
	Zombie *heap_zombie = new Zombie(name);
	return heap_zombie;
}
