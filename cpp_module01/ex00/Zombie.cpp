#include "./Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " has been destoyed!" << std::endl;
}

void    Zombie::announce()
{
	std::cout << "<" << _name << "> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name) 
{
	_name = name;
}
