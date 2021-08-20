#include "Bureaucrat.hpp"

int main(){
	std::string name;
	std::string		str;
	int		grade;
	std::cout << "Enter name:";
	std::getline(std::cin, name);
	std::cout << "Enter grade:";
	std::getline(std::cin, str);
	grade = std::stoi(str);
	try
	{
		Bureaucrat bur(name, grade);
	std::cout << bur << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}