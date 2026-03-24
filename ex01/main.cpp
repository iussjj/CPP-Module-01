#include "Zombie.hpp"

/*
	When an array of objects has been initialized in heap memory
	with the 'new' keyword: Zombie *horde = new Zombie[N];
	it must be freed with delete[]: delete[] horde; This automatically
	loops through the whole array.
*/

int	main(void)
{
	int horde_size = 666;
	std::string horde_name = "Belzebub";

	Zombie *horde = zombieHorde(horde_size, horde_name);

	for (int i = 0; i < horde_size; i++)
	{
		horde[i].announce();
	}
	
	delete[] horde;

	return 0;
}