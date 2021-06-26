#include "./Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie has been created!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie has been destoyed!" << std::endl;
}

void    Zombie::announce()
{
	std::cout << "<" << _name << "> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name) 
{
	_name = name;
}