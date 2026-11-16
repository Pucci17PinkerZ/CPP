#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		std::string	getName() const;
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		std::string _name;
		long	_hitPoint;
		int		_energyPoint;
		int		_attackDamage;
};