#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog Default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(Dog const &dog) : Animal(dog) {
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
}

Dog	const &Dog::operator= (Dog const &dog){
	std::cout << "Dog Assignment operator called" << std::endl;
    this->_type = dog._type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Wouuuf Wouuuf!!" << std::endl;
}

