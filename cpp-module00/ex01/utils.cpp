#include "./contact.hpp"

void    print_prompt()
{
    std::cout << "\033[1;33m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m" << std::endl;
	std::cout << "\033[1;33m  WELCOME TO YOUR PHONEBOOK \033[0m" << std::endl;
	std::cout << "\033[1;33m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m" << std::endl;
	std::cout << "\033[1;33m\t Type ADD ! \t\033[0m" << std::endl;
	std::cout << "\033[1;33m~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m" << std::endl;
	std::cout << "\033[1;33m\t Type SEARCH ! \t\033[0m" << std::endl;
	std::cout << "\033[1;33m~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m" << std::endl;
	std::cout << "\033[1;33m\t Type EXIT ! \t\033[0m" << std::endl;
	std::cout << "\033[1;33m~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m" << std::endl;
	std::cout << "\033[1;34m~> Enter your request ~~~> \033[0m";
}

int	is_number(const char *num)
{
	int j;
	int i;

	i = strlen(num) - 1;
	j = 0;
	while (num[i] == '\t' || num[i] == ' ')
		i--;
	while ((num[j] == '\t' || num[j] == ' '))
		j++;
	while (num[j] && j <= i)
	{
		if (!isdigit(num[j]))
		{
			std::cout << "\033[1;31m~> Wrong index, Try again! ~~~>\033[0m" << std::endl;
			return (0);
		}
		j++;
	}
	return (1);
}

std::string	get_input(std::string request)
{
	if (!std::getline(std::cin, request))
		exit(0);
	return (request);
}
