#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){
    std::cout << "\033[0;33mDiamondTrap Default Constructor has been called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name){
    _Name = name;
    ClapTrap::_Name = name + "_clap_name";
    _Hitpoints = FragTrap::_Hitpoints;
    _EnergyPoints = ScavTrap::_EnergyPoints;
    _AttackDamage = FragTrap::_AttackDamage;
    ScavTrap::attack("DiamondTrap target");
}

DiamondTrap::DiamondTrap(DiamondTrap const &Diamondtrap) : ClapTrap(Diamondtrap)
{
    std::cout << "\033[0;33mDiamondTrap Copy construtor has been called\033[0m" << std::endl;   
}

DiamondTrap    &DiamondTrap::operator= (DiamondTrap const &diamondtrap)
{
    std::cout << "\033[0;33mAssignation operator has been called\033[0m" << std::endl;
    ClapTrap::operator=(diamondtrap);
    return (*this);
}

DiamondTrap::~DiamondTrap(){
    std::cout << "\033[0;33mScavTrap Default Destructor has been called\033[0m" << std::endl;
}

void    DiamondTrap::whoAmI(){
    std::cout << "my name is " << _Name << "and my claptrap name is" << ClapTrap::_Name << std::endl;
}
