#ifndef FragTrap_HPP
# define FragTrap_HPP
# include "ClapTrap.hpp"

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