#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(std::string type);
	Cure(const Cure &);
	Cure &operator=(const Cure &);
	~Cure();
	AMateria* clone() const;
	void use(ICharacter &target);
};



#endif