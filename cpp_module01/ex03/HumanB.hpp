#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "./Weapon.hpp"
class HumanB
{
private:
    std::string _name;
    Weapon*     _humanBWeapon;
public:
    void    attack();
    void    setWeapon(Weapon& humanBWeapon);
    HumanB();
    HumanB(std::string init) : _name(init){}
    ~HumanB();
};



#endif