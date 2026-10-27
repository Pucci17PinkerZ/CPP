#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2){
		std::cerr << "invalid input usage: ./harlFilter <level>" << std::endl;
		return 1;
	}

	Harl harlOnlyKnowOneThing;
	harlOnlyKnowOneThing.complain(av[1]);
	return 0;
}