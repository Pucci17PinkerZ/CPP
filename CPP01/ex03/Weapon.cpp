#include "Weapon.hpp"


Weapon::Weapon(): _type()
{
	std::cout << "A new Weapon was created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "A Weapon was erased" << std::endl;
}
Weapon::Weapon(std::string weaponType)
{
	_type = weaponType;
		std::cout << "A new Weapon " << _type << " was created" << std::endl;
}
const std::string Weapon::getType() const
{
	return (_type);
}
void	Weapon::setType(std::string newValue)
{
	_type = newValue;
}