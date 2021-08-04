#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
}

MateriaSource::MateriaSource(const MateriaSource&){
    (*this) = MateriaSource;
}

MateriaSource   const &MateriaSource::operator=(const MateriaSource &)
{
    return (this);
}

void    MateriaSource::learnMateria(AMateria* materia){
    for(int i = 0; i < 4; i++)
        this->materia[i] = materia;
}

AMateria* MaterialSource::createMateria(std::string const &type){
    AMateria *materia = new AMateria();
    if (!type.empty())
        materia->_type = type;
    else
        return nullptr;
    return(materia);
}

~MateriaSource(){
    delete materia;
}
