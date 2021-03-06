#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
}


Cure::Cure(const Cure &cure){
	(*this) = cure;
}

Cure &Cure::operator=(const Cure& cure){
	this->_type = cure._type;
	return (*this);
}

Cure::~Cure(){
}

AMateria*	Cure::clone() const{
	AMateria *clone = new Cure();
	return clone;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}