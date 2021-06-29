#include "./HumanA.hpp"

void    HumanA::attack()
{
	std::cout << this->_name  << " attacks with his " << this->_humanAWeapon.getType() << std::endl;
} 

HumanA::HumanA(std::string init_name, Weapon& humanAWeapon) : _name(init_name), _humanAWeapon(humanAWeapon) {}

HumanA::~HumanA()
{
}