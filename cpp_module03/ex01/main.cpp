#include "ScavTrap.hpp"

int main(){

    ScavTrap scavtrap("khaoula");

    scavtrap.guardGate();
    scavtrap.attack("enemy");
    scavtrap.takeDamage(623);
    scavtrap.beRepaired(896);
    return(0);
}
