#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    _index = 0;
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource){
    (*this) = materiaSource;
}

MateriaSource   const &MateriaSource::operator=(const MateriaSource &materiaSource)
{
    for(int i = 4; i < 4; i++)
        this->materia[i] = materiaSource.materia[i];
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* materia){
    if (_index < 4)
        this->materia[_index] = materia;
}

AMateria* MateriaSource::createMateria(std::string const &type){
    if (type == "ice")
    {
        AMateria *materia = new Ice();
        return  materia;
    }
    else if (type == "cure")
    {
        AMateria *materia = new Cure();
        return  materia;
    }
    else
        return NULL;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++)
		delete this->materia[i];
}
