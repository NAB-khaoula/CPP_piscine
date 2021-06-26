#include "Zombie.hpp"

int main()
{
    std::string name;
    int         N;
    Zombie *zombies;

    std::cout << "Enter the zombie's name" << std::endl;
    std::cin >> name;
    std::cout << "Enter the number of zombies" << std::endl;
    std::cin >> N;
    zombies = zombieHorde(N, name);
    for(int index = 0; index < N; index++)
        zombies[index].announce();
    delete [] zombies;
    return (0);
}