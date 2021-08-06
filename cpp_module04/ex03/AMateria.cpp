#include "AMateria.hpp"

AMateria::AMateria(){
}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria& amateria){
	(*this) = amateria;
}

AMateria::~AMateria(){
}

AMateria &AMateria::operator=(const AMateria& amateria){
	this->_type = amateria._type;
	return (*this);
}

std::string &AMateria::getType(){
	return (this->_type);
}

void	AMateria::use(ICharacter& target){
	(void)target;
}
