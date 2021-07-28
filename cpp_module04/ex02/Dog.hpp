#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* attribute;
	public:
		Dog();
		Dog(Dog const &dog);
		~Dog();
		Dog const &operator= (Dog const &dog);
        void    makeSound() const;		
		Brain	*getBrain() const;
};



#endif