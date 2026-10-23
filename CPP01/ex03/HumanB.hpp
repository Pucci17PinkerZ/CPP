#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		~HumanB();
		void	attack(void);
	private:
		std::string _name;
		Weapon _myWeapon;
};