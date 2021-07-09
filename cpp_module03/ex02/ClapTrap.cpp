#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void)
{
    std::cout << "Default Constructor has been called" << std::endl;
    _Name = "noname";
    _Hitpoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Default Constructor has been called" << std::endl;
    _Name = name;
    _Hitpoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap){
    std::cout << "ClapTrap Copy construtor has been called" << std::endl;
    _Name = claptrap._Name;
    _Hitpoints = claptrap._Hitpoints;
    _EnergyPoints = claptrap._EnergyPoints;
    _AttackDamage = claptrap._AttackDamage;
}

ClapTrap    &ClapTrap::operator= (ClapTrap const &claptrap)
{
    std::cout << "Assignation operator has been called" << std::endl;
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
    std::cout << "the amount of damage is "<< amount << " damage points " << _AttackDamage<< std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap <" << _Name << "> has been repaired. The actual amount of Attack Damage is <" << amount << ">\n";
}
