#include "Animal.hpp"

Animal::Animal(): _type("ANIMAL"){
    std::cout << "Default Animal's constructor has been called" << std::endl;
}

Animal::Animal(Animal const &animal) : _type(animal._type){
    std::cout << "Copy Animal's constructor has been called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal's destructor has been called" << std::endl;
}

Animal const &Animal::operator= (Animal const &animal){
    std::cout << "assignment operator has been called" << std::endl;
    _type = animal._type;
    return (*this);
}

std::string Animal::getType() const{ return _type;}

void    Animal::makeSound() const
{
    std::cout << _type << "????????????????????" << std::endl;
}
