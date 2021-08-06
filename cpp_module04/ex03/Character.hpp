#ifndef CHARARTERE_HPP
#define CHARARTERE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		int         _index;
		AMateria    *materia[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character &);
		Character &operator=(const Character &);
		~Character();
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif