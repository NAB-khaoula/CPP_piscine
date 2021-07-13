#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){ 
    std::cout << "\033[0;31mScavTrap Default Constructor has been called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name){ 
    std::cout << "\033[0;31mScavTrap parameterized Constructor has been called\033[0m" << std::endl;
    _Name = name;
    _Hitpoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap) : ClapTrap(scavtrap)
{
    std::cout << "Scavtrap Copy construtor has been called" << std::endl;
}

ScavTrap    &ScavTrap::operator= (ScavTrap const &scavtrap)
{
    std::cout << "Assignation operator has been called" << std::endl;
    ClapTrap::operator=(scavtrap);
    return (*this);
}

ScavTrap::~ScavTrap(void){ 
    std::cout << "\033[0;31mScavTrap Default Destructor has been called\033[0m" << std::endl;
}

void    ScavTrap::attack(std::string const &target)
{
    std::cout << "\033[0;31mScavTrap is attacking " << target << "\033[0m" <<std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "\033[0;31mScavTrap have enterred in Gate keeper mode.\033[0m" << std::endl;
}
