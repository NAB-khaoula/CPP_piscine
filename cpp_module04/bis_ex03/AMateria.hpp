#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "./ICharacter.hpp" 
#include <iostream>
#include <string>
#include <iomanip>

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria&);
		AMateria &operator=(const AMateria&);
		virtual ~AMateria();
		std::string &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif