#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
}


Ice::Ice(const Ice &ice){
    (*this) = ice;
}

Ice &Ice::operator=( const Ice &ice){
    this->_type = ice._type;
	return (*this);
}

Ice::~Ice(){
}

AMateria *Ice::clone() const{
    AMateria *clone = new Ice();
    return clone;
}

void    Ice::use(ICharacter& target){
    std::cout << "Ice: \"* heals " << target.getName() << "'s wounds *\"" << std::endl;
}