#include "Bureaucrat.hpp"
#include <sstream>

int main(){
	std::string name;
	std::string		str;
	int		grade = 0;
	std::cout << "Enter name:";
	std::getline(std::cin, name);
	std::cout << "Enter grade:";
	std::getline(std::cin, str);
	std::stringstream		strConvert(str);
	strConvert >> grade;
	try
	{
		Bureaucrat bur(name, grade);
		std::cout << bur << std::endl;
		bur.inc();
		std::cout << bur << "(after increment)" << std::endl;
		bur.dec();
		std::cout << bur << "(after decrement)"<< std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}