#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :public FragTrap, public ScavTrap
{
private:
    std::string _Name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &diamondtrap);
    DiamondTrap &operator= (DiamondTrap const &diamondtrap);
    ~DiamondTrap();
    void    whoAmI();
};


#endif