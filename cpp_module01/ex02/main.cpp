#include <iostream>
#include <string>

int main()
{
	std::string brain;
	brain = "HI THIS IS BRAIN";
	std::string *stringPTR;
	stringPTR = &brain;
	std::string  &stringREF = brain;
	std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}