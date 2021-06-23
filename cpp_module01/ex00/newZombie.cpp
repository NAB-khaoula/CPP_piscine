#include "Zombie.hpp"


void	randomChump(std::string name)
{
	Zombie zombie;

	zombie.setName(name);
	zombie.announce();
}


Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie;
	zombie->setName(name);
	return(zombie);
}
