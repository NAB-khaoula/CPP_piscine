#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor has been called" << std::endl;
    _Name = name;
    _Hitpoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor has been called" << std::endl;
}

void    ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap <" << _Name << "> attacks <" <<  target << ">, causing <";
    std::cout << _AttackDamage << "> Points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap <" << _Name << "> took  this amount : <" <<  amount << "> of damage from his last attack" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap <" << _Name << "> has been repaired. The actual amount of Attack Damage is <" << amount << ">\n";
}
