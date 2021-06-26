#include "./HumanB.hpp"

void    HumanB::attack()
{
	std::cout << this->_name  << " attacks with his " << _humanBWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& humanBWeapon)
{
	_humanBWeapon = &humanBWeapon;
}

HumanB::~HumanB()
{
}