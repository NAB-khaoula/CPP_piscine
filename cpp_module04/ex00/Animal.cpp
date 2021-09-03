#include "Animal.hpp"

Animal::Animal(): _type("ANIMAL"){
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const &animal){
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = animal;
}

Animal::~Animal(){
    std::cout << "Animal Destructor called" << std::endl;
}

Animal const &Animal::operator= (Animal const &animal){
    std::cout << "Animal Assignment operator called" << std::endl;
    this->_type = animal._type;
    return (*this);
}

std::string Animal::getType() const{ return _type;}

void    Animal::makeSound() const
{
    std::cout << _type << " ???????????????" << std::endl;
}
