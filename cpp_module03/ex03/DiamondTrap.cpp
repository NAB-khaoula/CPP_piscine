#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){
    std::cout << "\033[0;33mDiamondTrap Default Constructor has been called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name){
    std::cout << "\033[0;33mDiamondTrap parameterized Constructor has been called\033[0m" << std::endl;
    _Name = name;
    ClapTrap::_Name = name + "_clap_name";
    _Hitpoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 30;
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
    std::cout << "\033[0;33mDiamond Default Destructor has been called\033[0m" << std::endl;
}

void    DiamondTrap::whoAmI(){
    std::cout << "my name is " << _Name << "and my claptrap name is" << ClapTrap::_Name << std::endl;
}
