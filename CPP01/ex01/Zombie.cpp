#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "a Zombie has left its grave" << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "a Zombie has left its grave" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is dead again" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombieName(std::string name)
{
	_name = name;
}