#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "./Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon&     _humanAWeapon;
public:
    void    attack();
    HumanA(std::string init_name, Weapon& humanAWeapon) : _name(init_name), _humanAWeapon(humanAWeapon) {}
    ~HumanA();
};



#endif