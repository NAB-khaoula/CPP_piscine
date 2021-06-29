#include "./Karen.hpp"

int main()
{
	Karen karen;
	std::string levelComplain;
	std::cout << "HERE WE ARE KAREN, GIVE YOUR COMPLAINS!" << std::endl;
	std::cin >> levelComplain;	
	karen.complain(levelComplain);
	return 0;
}
