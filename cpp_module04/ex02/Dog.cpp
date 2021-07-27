#include "Dog.hpp"

Dog::Dog(){
    std::cout << "\033[0;31mDefault dog's constructor has been called\033[0m" << std::endl;
    this->_type = "Dog";
    this->attribute = new Brain();
}

Dog::Dog(Dog const &dog) {
    std::cout << "\033[0;31mCopy dog's constructor has been called\033[0m" << std::endl;
    *this = dog;
}

Dog::~Dog() {
    std::cout << "\033[0;31mDog's destructor has been called\033[0m" << std::endl;
    delete attribute;
}

Dog	const &Dog::operator= (Dog const &dog){
    std::cout << "\033[0;31mdog's assignment operator has been called\033[0m" << std::endl;
    this->_type = dog._type;
	this->attribute = new Brain();
	return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Wouuuf Wouuuf!!" << std::endl;
}

Brain*	Dog::getBrain() const {return attribute;}
