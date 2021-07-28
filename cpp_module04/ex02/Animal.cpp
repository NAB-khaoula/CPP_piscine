#include "Animal.hpp"

AAnimal::AAnimal(): _type("ANIMAL"){
    std::cout << "Default Animal's constructor has been called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &animal) : _type(animal._type){
    std::cout << "Copy Animal's constructor has been called" << std::endl;
}

AAnimal::~AAnimal(){
    std::cout << "Animal's destructor has been called" << std::endl;
}

AAnimal const &AAnimal::operator= (AAnimal const &animal){
    std::cout << "assignment operator has been called" << std::endl;
    return (animal);
}

std::string AAnimal::getType() const{ return _type;}

// void    Animal::makeSound() const
// {
//     std::cout << _type << " make sound" << std::endl;
// }
