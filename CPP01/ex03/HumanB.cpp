#include "HumanB.hpp"

HumanB::HumanB(std::string name): _myWeapon(NULL)
{
	_name = name;
	std::cout << "HumanB " << _name <<" was crafted" << std::endl;
}

HumanB::~HumanB()
{

	std::cout << "HumanB is dead" << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	_myWeapon = &newWeapon;
}

void HumanB::attack()
{
	if (_myWeapon == NULL)
		std::cout << _name << " can't attack w/ an empty hand" << std::endl;
	else
		std::cout << _name << " attacks with their " << _myWeapon->getType() << std::endl;
}
