#include "./Weapon.hpp"

void Weapon::setType(const std::string& type)
{
    _type = type;
}

const std::string& Weapon::getType()
{
    return _type;
}

Weapon::Weapon()
{
}
Weapon::Weapon(std::string init) : _type(init) {}

Weapon::~Weapon()
{
}
