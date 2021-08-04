#include "Cure.hpp"

Cure::Cure(){
	std::cout << "Cure Default Constructor has been called" << std::endl;
}

Cure::Cure() : _type(type) {}

Cure::Cure(const Cure &cure){
	std::cout << "Cure Copy Constructor has been called" << std::endl;
	(*this) = cure;
}

Cure &Cure::operator=(const Cure & cure){
	std::cout << "Assignement operator has been called" << std::endl;
	this->_type = cure->type;
	return (*this);
}

Cure::~Cure(){
	std::cout << "Cure Destructor has been called" << std::endl;
}

AMateria*	Cure::clone() const{
	AMateria *clone = new Cure();
	return clone;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "Cures: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}
