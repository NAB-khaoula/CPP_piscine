#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string _type;
    Zombie *_zombie;
public:
    Zombie* newZombie(std::string name);
    void    setZombieType(std::string type);
    void    randomChump();
    ZombieEvent();
    ~ZombieEvent();
};

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

#endif
