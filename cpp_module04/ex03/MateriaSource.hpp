#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource {
    private:
        AMateria *materia[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &);
        MateriaSource   const &operator=(const MateriaSource &);
        ~MateriaSource();
        void learnMateria(AMateria* materia);
        AMateria* createMateria(std::string const& type);
};

#endif