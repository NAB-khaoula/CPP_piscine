#include "Ice.hpp"

Ice::Ice(){
    std::cout << "Ice Default Constructor has been called" << std::endl;
}

Ice::Ice(const Ice &ice){
    std::cout << "Ice Copy Constructor has been called" << std::endl;
    *this = ice;
}

Ice &Ice::operator=( const Ice &ice){
    std::cout << "Assignement operator has been called" << std::endl;
}

Ice::~Ice(){
    std::cout << "Ice Destructor has been called" << std::endl;
}

AMateria *Ice::clone() const{
    AMateria *clone = new Ice();
    return clone;
}

void    Ice::use(ICharacter& target){
    std::cout << "Ice: \"* heals " << target.getName() << "'s wounds *\"" << std::endl;
}
