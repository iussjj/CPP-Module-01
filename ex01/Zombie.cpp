#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name) : name(name)
{
	//this->name = name; <-equivalent to initialization list above
	std::cout << this->name << " has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}