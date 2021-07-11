#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void){
    std::cout << "\e[0;34mDefault Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "parameterized Constructor has been called" << std::endl;
    _Name = name;
    _Hitpoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap){
    std::cout << "Copy construtor has been called" << std::endl;
    _Name = claptrap._Name;
    _Hitpoints = claptrap._Hitpoints;
    _EnergyPoints = claptrap._EnergyPoints;
    _AttackDamage = claptrap._AttackDamage;
}

ClapTrap    &ClapTrap::operator= (ClapTrap const &claptrap)
{
    _Name = claptrap._Name;
    _Hitpoints = claptrap._Hitpoints;
    _EnergyPoints = claptrap._EnergyPoints;
    _AttackDamage = claptrap._AttackDamage;
    return (*this);
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
