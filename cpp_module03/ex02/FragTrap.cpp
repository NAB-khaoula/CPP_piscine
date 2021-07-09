#include "FragTrap.hpp"


FragTrap::FragTrap(void) {
    std::cout << "\033[0;32mFragTrap Default Constructor has been called\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "\033[0;32mFragTrap parameterized Constructor has been called\033[0m" << std::endl;
    _Name = name;
    _Hitpoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &fragtrap)
{
    std::cout << "\033[0;32mFragTrap Copy construtor has been called\033[0m" << std::endl;
    _Name = fragtrap._Name;
    _Hitpoints = fragtrap._Hitpoints;
    _EnergyPoints = fragtrap._EnergyPoints;
    _AttackDamage = fragtrap._AttackDamage;
}

FragTrap    &FragTrap::operator= (FragTrap const &fragtrap)
{
    std::cout << "Assignation operator has been called" << std::endl;
    _Name = fragtrap._Name;
    _Hitpoints = fragtrap._Hitpoints;
    _EnergyPoints = fragtrap._EnergyPoints;
    _AttackDamage = fragtrap._AttackDamage;
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "\033[0;32mFragTrap Default Destructor has been called\033[0m" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "\033[0;32mHigh five guuuys!\033[0m" << std::endl;
}
