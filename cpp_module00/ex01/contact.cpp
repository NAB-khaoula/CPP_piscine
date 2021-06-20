# include "./contact.hpp"

void    contact::add_contact(int *index)
{
    if (*index == 8)
	{
		std::cout << "\033[1;31m~> WARNING! No space left.\033[0m" << std::endl;
	}
    else
    {
		std::cout << "\033[1;34m~> Please enter the first name      : \033[0m";
        f_name = get_input(f_name);
		std::cout << "\033[1;34m~> Please enter the last name       : \033[0m";
        l_name = get_input(l_name);
		std::cout << "\033[1;34m~> Please enter the nickname        : \033[0m";
        nickname = get_input(nickname);
		std::cout << "\033[1;34m~> Please enter the login           : \033[0m";
        login = get_input(login);
		std::cout << "\033[1;34m~> Please enter the postal address  : \033[0m";
        postal_adrr = get_input(postal_adrr);
		std::cout << "\033[1;34m~> Please enter the email adress    : \033[0m";
        email_adrr = get_input(email_adrr);
		std::cout << "\033[1;34m~> Please enter the phone number    : \033[0m";
        phone_num = get_input(phone_num);
		std::cout << "\033[1;34m~> Please enter the birdthay date   : \033[0m";
        b_day = get_input(b_day);
		std::cout << "\033[1;34m~> Please enter the favorite meal   : \033[0m";
        favor_meal = get_input(favor_meal);
		std::cout << "\033[1;34m~> Please enter the underwear color : \033[0m";
        underwear_color = get_input(underwear_color);
		std::cout << "\033[1;34m~> Please enter the darkest secret  : \033[0m";
        dark_secret = get_input(dark_secret);
		std::cout << "\033[1;32m~> Your contact is saved!\033[0m" << std::endl;
		(*index)++;
    }
}

void	contact::display_contact(int i, contact m_contact[])
{
	std::cout << "\033[1;32m~> First name      : \033[0m" << m_contact[i].f_name << std::endl;
	std::cout << "\033[1;32m~> Last name       : \033[0m" << m_contact[i].l_name << std::endl;
	std::cout << "\033[1;32m~> Nickname        : \033[0m" << m_contact[i].nickname << std::endl;
	std::cout << "\033[1;32m~> Login           : \033[0m" << m_contact[i].login << std::endl;
	std::cout << "\033[1;32m~> Postal address  : \033[0m" << m_contact[i].postal_adrr << std::endl;
	std::cout << "\033[1;32m~> Email address   : \033[0m" << m_contact[i].email_adrr << std::endl;
	std::cout << "\033[1;32m~> Phone number    : \033[0m" << m_contact[i].phone_num << std::endl;
	std::cout << "\033[1;32m~> Birthday date   : \033[0m" << m_contact[i].b_day << std::endl;
	std::cout << "\033[1;32m~> Favorite meal   : \033[0m" << m_contact[i].favor_meal << std::endl;
	std::cout << "\033[1;32m~> Underwear color : \033[0m" << m_contact[i].underwear_color << std::endl;
	std::cout << "\033[1;32m~> Darkest secret  : \033[0m" << m_contact[i].dark_secret << std::endl;
}

void	contact::table_contact(int index, contact m_contact[])
{
	int i;

    i = 0;
	while (i < index)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		if (std::strlen(m_contact[i].f_name.c_str()) > 10)
        {
			std::cout << "|" << std::setw(10) << m_contact[i].f_name.substr(0,9) + ".";
        }
		else
			std::cout << "|" << std::setw(10) << m_contact[i].f_name;
		if (std::strlen(m_contact[i].l_name.c_str()) > 10)
        {
			std::cout << "|" << std::setw(10) <<  m_contact[i].l_name.substr(0,9) + ".";
        }
		else
			std::cout << "|" << std::setw(10) <<  m_contact[i].l_name;
		if (std::strlen(m_contact[i].nickname.c_str()) > 10)
        {
			std::cout << "|" << std::setw(10) << m_contact[i].nickname.substr(0,9) + "." ;
        }
		else
			std::cout << "|" << std::setw(10) << m_contact[i].nickname;
		std::cout << "|" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		i++;
	}
}

void	contact::search_contact(int index, contact m_contact[])
{
	int			i;
	std::string	idx;

	std::cout << "\033[1;32m--------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "--------------------------------------------\033[0m" << std::endl;
	m_contact[index].table_contact(index, m_contact);
	std::cout << "\033[1;34m~> Enter the index desired ~~~> \033[0m";
    idx = get_input(idx);
	if (!(is_number(idx.c_str())))
		return ;
	if ((i = atoi(idx.c_str()) - 1) < 8 && i >= 0 && i < index)
		display_contact(i, m_contact);
	else
		std::cout << "\033[1;31m~> Wrong index, Try again! ~~~>\033[0m" << std::endl;
}
