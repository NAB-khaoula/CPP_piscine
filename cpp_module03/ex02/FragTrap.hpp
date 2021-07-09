#ifndef FragTrap_HPP
# define FragTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &fragtrap);
		FragTrap    &operator= (FragTrap const &fragtrap);
		~FragTrap();
		void highFivesGuys(void);
};



#endif