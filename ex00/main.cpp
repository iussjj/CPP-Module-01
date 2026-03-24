#include "Zombie.hpp"

int	main(void)
{
	Zombie *uno = newZombie("Uno");
	uno->announce();
	delete uno;
	randomChump("Dos");
	return 0;
}