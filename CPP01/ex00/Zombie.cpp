#include "Zombie.hpp"

void	Zombie::announce(void)
{
	if(name == "Foo")
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	std::cout << "<" << name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}