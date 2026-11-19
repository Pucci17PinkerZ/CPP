#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "=== building a ClapTrap ===" << std::endl;
	ClapTrap	c("LePen");

	std::cout << "=== building a ScavTrap (watch the construction chain) ===" << std::endl;
	ScavTrap	s("Serena");

	std::cout << "=== ClapTrap attacks ===" << std::endl;
	c.attack("Bardella");

	std::cout << "=== ScavTrap attacks (different message) ===" << std::endl;
	s.attack("Bardella");

	std::cout << "=== ScavTrap guardGate ===" << std::endl;
	s.guardGate();

	std::cout << "=== ScavTrap takes damage and repairs ===" << std::endl;
	s.takeDamage(30);
	s.beRepaired(10);

	std::cout << "=== final state ===" << std::endl;
	std::cout << "c: " << c.getHitPoints() << " hp, " << c.getEnergyPoints() << " energy" << std::endl;
	std::cout << "s: " << s.getHitPoints() << " hp, " << s.getEnergyPoints() << " energy" << std::endl;

	std::cout << "=== destruction ===" << std::endl;
	return (0);
}
