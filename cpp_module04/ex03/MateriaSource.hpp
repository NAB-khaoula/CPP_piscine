#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


class MateriaSource : public IMateriaSource {
    private:
        int _index;
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