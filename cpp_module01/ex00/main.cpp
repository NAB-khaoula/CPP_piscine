#include "./Zombie.hpp"

int main()
{
    std::string name;
    Zombie *zombie;
    std::cout << "Enter the zombie's name" << std::endl;
    std::cin >> name;
    zombie = newZombie(name);
    randomChump(name);
    std::cout << "done" << std::endl;
    delete zombie;
    return (0);
}