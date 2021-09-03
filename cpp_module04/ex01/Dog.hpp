#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* attribute;
	public:
		Dog();
		Dog(Dog const &dog);
		virtual ~Dog();
		Dog const &operator= (Dog const &dog);
        void    makeSound() const;		
		Brain	*getBrain() const;
};



#endif