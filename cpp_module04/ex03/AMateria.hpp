#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "./ICharacter.hpp" 

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(const std::string& type);
		AMateria(const AMateria&);
		AMateria &operator=(const AMateria&);
		virtual ~AMateria();
		std::string &getType();
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif