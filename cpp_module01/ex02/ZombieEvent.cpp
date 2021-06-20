// #include "ZombieEvent.hpp"

// void    ZombieEvent::setZombieType(std::string type)
// {
//     _type = type;
// }

#include <string>
#include <iostream>

std::string	randomChump()
{
	std::string	random_word;
	int			random_ascii;

	srand (time(0));
	for (int i = 0; i < 6; i++)
	{
		random_ascii = rand() % 100 + 65;
		if (isalpha())
		random_word  += random_ascii;
	}
	return (random_word);
}

int main()
{
	std::cout << randomChump();
}
