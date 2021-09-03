#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal"){
    std::cout << "Wrong Animal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wronganimal){
    std::cout << "Wrong Animal Copy constructor called" << std::endl;
    *this = wronganimal;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Wrong Animal Destructor called" << std::endl;
}

WrongAnimal const &WrongAnimal::operator= (WrongAnimal const &wronganimal){
    std::cout << "Wrong Animal Assignment operator called" << std::endl;
    this->_type = wronganimal._type;
    return (*this);
}

std::string WrongAnimal::getType() const{ return _type;}

void    WrongAnimal::makeSound() const
{
    std::cout << _type << " ???????????????" << std::endl;
}
