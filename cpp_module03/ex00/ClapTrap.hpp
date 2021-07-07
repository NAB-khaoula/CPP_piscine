#ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string	_Name;
	int			_Hitpoints;
	int			_EnergyPoints;
	int			_AttackDamage;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif