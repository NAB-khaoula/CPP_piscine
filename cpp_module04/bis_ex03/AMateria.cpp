#include "AMateria.hpp"

AMateria::AMateria(){
}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria& amateria){
    (*this) = amateria;
}

AMateria &AMateria::operator=(const AMateria& amateria){
    this->_type = amateria._type;
    return (*this);
}

std::string &AMateria::getType() const{
    return (this->_type);
}
