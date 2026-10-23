#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "a Zombie has left is grave" << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "a Zombie has left is grave" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is dead again" << std::endl;
}

void	Zombie::announce(void)
{
	if(_name == "Foo")
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << "<" << _name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombieName(std::string name)
{
	_name = name;
}