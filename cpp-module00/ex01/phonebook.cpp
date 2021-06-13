#include "./contact.hpp"

int main()
{
	std::string request;
	int			index;
	contact	m_contact[8];
    
	index = 0;
	while (1)
	{
		print_prompt();
		request = get_input(request);
		if (request == "ADD" || request == "Add" || request == "add")
			m_contact[index].add_contact(&index);
		else if (request == "SEARCH" || request == "Search" || request == "search")
			m_contact[index].search_contact(index, m_contact);
		else if (request == "EXIT" || request == "Exit" || request == "exit")
		{
			std::cout << "\033[1;32mYou have exited the program!" << std::endl;
			break;
		}
		else
			std::cout << "\033[1;31m~ Wrong input, Try again!\033[0m" << std::endl;
	}
}