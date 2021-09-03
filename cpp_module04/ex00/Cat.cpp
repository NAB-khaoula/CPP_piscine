#include "Cat.hpp"

Cat::Cat(){
	this->_type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const &cat) : Animal(cat) {
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}

Cat	const &Cat::operator= (Cat const &cat){
	std::cout << "Cat Assignment operator called" << std::endl;
    this->_type = cat._type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miaaaaou" << std::endl;
}
