#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* attribute;
	public:
		Cat();
		Cat(Cat const &cat);
		virtual ~Cat();
		Cat const &operator= (Cat const &cat);
   		void    makeSound() const;
		Brain	*getBrain() const;
};



#endif