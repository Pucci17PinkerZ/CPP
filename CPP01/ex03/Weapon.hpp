#pragma once
#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon();
		~Weapon();
		const std::string getType() const;
		void	setType(std::string newValue);
	private:
		std::string _type;
};