#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &wrongcat);
		~WrongCat();
		WrongCat const &operator= (WrongCat const &wrongcat);
   		void    makeSound() const;
};



#endif