#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string _type;
public:
    const std::string& getType();
    void setType(const std::string& type);
    Weapon(std::string init);
    Weapon();
    ~Weapon();
};

#endif