#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &scavtrap);
	ScavTrap    &operator= (ScavTrap const &scavtrap);
	~ScavTrap();
	void 	attack(std::string const &target);
	void	guardGate();
};



#endif