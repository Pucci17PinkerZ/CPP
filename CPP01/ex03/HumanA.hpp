#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string humanName, Weapon& weaponSelection);
		~HumanA();
		void	attack(void);
	private:
		std::string _name;
		Weapon _myWeapon;
};