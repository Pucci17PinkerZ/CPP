#include "Zombie.hpp"

void	Zombie::announce(void)
{
	if(_name == "Foo")
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	std::cout << "<" << _name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}