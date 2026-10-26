#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon& weaponSelection): _name(humanName) , _myWeapon(weaponSelection)
{
	std::cout << "HumanA " << humanName;
	std::cout << "was crafted with his Weapon" << weaponSelection.getType() << std::endl;
}



HumanA::~HumanA()
{
	std::cout << "HumanA is dead" << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _myWeapon.getType() << std::endl;
}
