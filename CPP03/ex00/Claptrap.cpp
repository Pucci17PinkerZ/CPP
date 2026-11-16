#include "Claptrap.hpp"

ClapTrap::ClapTrap(std::string _name): _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Claptrap Default constructor" << std::endl;
}

// std::cout << "" << std::endl;ClapTrap <name> attacks <target>, causing <damage> points of damage!

std::string	ClapTrap::getName() const
{
	return this->_name;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoint <= 0)
	{
		std::cout << "No energy points lefts" << std::endl;
	}
	std::cout << "ClapTrap " << this->getName() << " attacks "<< target.getName() << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint <= 0)
	{
		std::cout << "No energy points lefts " << this->getName() << "for being repaired" << std::endl;
	}
}

