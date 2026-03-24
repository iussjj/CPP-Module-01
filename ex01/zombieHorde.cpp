#include "Zombie.hpp"
#include <iostream>

/*
	When initializing a variable length array of objects in heap memory,
	the 'new' keyword is needed: Zombie *horde = new Zombie[N];
*/

Zombie *zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "Error! Minimum horde size is 1!" << std::endl;
		return nullptr;
	}
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name + " " + std::to_string(i + 1));
	}
	return horde;
}