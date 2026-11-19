#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("LePen");
	ClapTrap	b(a);

	std::cout << "--- attack ---" << std::endl;
	a.attack("Bardella");

	std::cout << "--- take damage ---" << std::endl;
	a.takeDamage(5);
	a.takeDamage(20);

	std::cout << "--- repair with no hit points ---" << std::endl;
	a.beRepaired(3);

	std::cout << "--- drain energy (10 attacks + 1) ---" << std::endl;
	for (int i = 0; i < 11; i++)
		b.attack("Mélanchon");

	std::cout << "--- repair with no energy ---" << std::endl;
	b.beRepaired(1);

	std::cout << "--- final state ---" << std::endl;
	std::cout << "a: " << a.getHitPoints() << " hp, "
			  << a.getEnergyPoints() << " energy" << std::endl;
	std::cout << "b: " << b.getHitPoints() << " hp, "
			  << b.getEnergyPoints() << " energy" << std::endl;

	return (0);
}
