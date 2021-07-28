#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* attribute;
	public:
		Cat();
		Cat(Cat const &cat);
		~Cat();
		Cat const &operator= (Cat const &cat);
   		void    makeSound() const;
		Brain	*getBrain() const;
};



#endif