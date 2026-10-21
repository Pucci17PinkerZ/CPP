#include "Zombie.hpp"

int	main(void)
{
	int nbr = 5;
	Zombie* zombieGang;

	zombieGang = zombieHorde(nbr, "gangzz");
	for(int i = 0; i < nbr; i++)
	{
		std::cout << "Zombie " << i << " ";
		zombieGang[i].announce();
		std::cout << std::endl;
	}
	delete[] zombieGang;
	return (0);
}