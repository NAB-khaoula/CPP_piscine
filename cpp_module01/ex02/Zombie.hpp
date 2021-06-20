#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string _name;
    std::string _type;
public:
    void    announce();
    Zombie();
    ~Zombie();
};

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}


#endif
