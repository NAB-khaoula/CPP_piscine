#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
#include <algorithm>
# include <string>


class contact
{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_adrr;
		std::string	email_adrr;
		std::string	phone_num;
		std::string	b_day;
		std::string	favor_meal;
		std::string	underwear_color;
		std::string	dark_secret;
	public:
		void    add_contact(int *index);
		void	search_contact(int index, contact m_contact[]);
		void	display_contact(int i, contact m_contact[]);
		void	table_contact(int index, contact m_contact[]);
};

std::string	get_input(std::string request);
void    	print_prompt();
int			is_number(const char *num);

#endif
