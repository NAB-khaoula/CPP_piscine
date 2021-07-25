#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &dog);
		~Dog();
		Dog const &operator= (Dog const &dog);
        void    makeSound() const;
};



#endif