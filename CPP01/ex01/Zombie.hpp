#pragma once

#include <iostream>
#include <string>

class Zombie
{
	public:
		void	announce(void);
		Zombie();
		Zombie(std::string _name);
		~Zombie();
	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );