#include "Dog.hpp"

Dog::Dog(){
    this->_type = "Dog";
}

Dog::Dog(Dog const &dog) : Animal(dog) {}

Dog::~Dog() {}

Dog	const &Dog::operator= (Dog const &dog){
	return (dog);
}

void    Dog::makeSound() const
{
    std::cout << "Wouuuf Wouuuf!!" << std::endl;
}

