#include "ZombieEvent.hpp"

void    Zombie::announce()
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

int main()
{
	ZombieEvent *zombieEvent = new ZombieEvent();
	

}