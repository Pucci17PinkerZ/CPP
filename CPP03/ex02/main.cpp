#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "=== building a ClapTrap ===" << std::endl;
	ClapTrap	c("LePen");

	std::cout << "=== building a FragTrap (watch the construction chain) ===" << std::endl;
	FragTrap	f("Franky");

	std::cout << "=== FragTrap starting stats (100/100/30) ===" << std::endl;
	std::cout << "f: " << f.getHitPoints() << " hp, " << f.getEnergyPoints()
			  << " energy, " << f.getAttackDamage() << " damage" << std::endl;

	std::cout << "=== FragTrap attacks (inherited from ClapTrap) ===" << std::endl;
	f.attack("Bardella");

	std::cout << "=== FragTrap highFivesGuys ===" << std::endl;
	f.highFivesGuys();

	std::cout << "=== FragTrap takes damage and repairs ===" << std::endl;
	f.takeDamage(30);
	f.beRepaired(10);

	std::cout << "=== final state ===" << std::endl;
	std::cout << "c: " << c.getHitPoints() << " hp, " << c.getEnergyPoints() << " energy" << std::endl;
	std::cout << "f: " << f.getHitPoints() << " hp, " << f.getEnergyPoints() << " energy" << std::endl;

	std::cout << "=== destruction (watch the reverse chain) ===" << std::endl;
	return (0);
}
