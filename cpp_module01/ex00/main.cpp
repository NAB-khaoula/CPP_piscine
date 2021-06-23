#include "./Zombie.hpp"

int main()
{
    std::string name;
    Zombie *zombie;
    std::cout << "Enter the zombie's name" << std::endl;
    std::cin >> name;
    zombie = newZombie(name);
    randomChump(name);
    delete zombie;
    return (0);
}