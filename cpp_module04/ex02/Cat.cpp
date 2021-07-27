#include "Cat.hpp"

Cat::Cat(){
    std::cout << "\033[0;32mDefault cat's constructor has been called\033[0m" << std::endl;
	this->_type = "Cat";
	this->attribute = new Brain();
}

Cat::Cat(Cat const &cat){
    std::cout << "\033[0;32mCopy cat's constructor has been called\033[0m" << std::endl;
	*this = cat;
}

Cat::~Cat() {
    std::cout << "\033[0;32mcat's destructor has been called\033[0m" << std::endl;
	delete attribute;
}

Cat	const &Cat::operator= (Cat const &cat){
    std::cout << "\033[0;32mcat's assignment operator has been called\033[0m" << std::endl;
	this->_type = cat._type;
	this->attribute = new Brain();
	return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miaaaaou" << std::endl;
}

Brain*	Cat::getBrain() const {return attribute;}
