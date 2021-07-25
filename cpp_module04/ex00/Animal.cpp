#include "Animal.hpp"

Animal::Animal(): _type("ANIMAL"){}

Animal::Animal(Animal const &animal) : _type(animal._type){}

Animal::~Animal(){}

Animal const &Animal::operator= (Animal const &animal){
    // (*this) = Animal(animal);
    return (animal);
}

std::string Animal::getType() const{ return _type;}

void    Animal::makeSound() const
{
    std::cout << _type << " make sound" << std::endl;
}
