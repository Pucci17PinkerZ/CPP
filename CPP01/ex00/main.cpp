#include "Zombie.hpp"

int main()
{
	Zombie *gnarg;
	Zombie gnorg("gnorg");

	gnarg = newZombie("gnarg");

	gnarg->announce();
	gnorg.announce();

	randomChump("gnurg");
	randomChump("Foo");

	delete gnarg;
	return (0);
}