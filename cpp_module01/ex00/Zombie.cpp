#include "./Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " has been destoyed!" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {};

void    Zombie::announce()
{
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
