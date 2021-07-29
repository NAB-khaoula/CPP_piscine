#ifndef CHARARTERE_HPP
#define CHARARTERE_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        const std::string _name;
        AMateria *materia[4];
    public:
        Character();
        Character(const Character &);
        Character &operator=(const Character &);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
};

#endif