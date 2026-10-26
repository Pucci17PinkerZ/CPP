#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon& newWeapon);
	private:
		std::string _name;
		Weapon *_myWeapon;
};