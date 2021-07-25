#include "Cat.hpp"

Cat::Cat(){
	this->_type = "Cat";
}

Cat::Cat(Cat const &cat) : Animal(cat) {}

Cat::~Cat() {}

Cat	const &Cat::operator= (Cat const &cat){
	return (cat);
}

void    Cat::makeSound() const
{
    std::cout << "Miaaaaou" << std::endl;
}
