#include "./Karen.hpp"

void    Karen::debug(void)
{
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void    Karen::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming here for years an you just started working here last month." << std::endl;
}

void    Karen::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain( std::string level )
{
	int i = 0;
	pointerToFunction pointerComplain[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	table[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i <= 3)
	{
		if (table[i] == level)
		{
			(this->*pointerComplain[i])();
			break;
		}
		i++;
	}
}

Karen::Karen(/* args */)
{
}

Karen::~Karen()
{
}