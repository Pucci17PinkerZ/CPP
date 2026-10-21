#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is dead again" << std::endl;
}

void	Zombie::announce(void)
{
	if(_name == "Foo")
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	std::cout << "<" << _name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}