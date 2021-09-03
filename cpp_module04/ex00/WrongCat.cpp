#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->_type = "WrongCat";
    std::cout << "Wrong Cat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongcat) : WrongAnimal(wrongcat) {
    std::cout << "Wrong Cat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Wrong Cat Destructor called" << std::endl;
}

WrongCat	const &WrongCat::operator= (WrongCat const &wrongcat){
	std::cout << "Wrong Cat Assignment operator called" << std::endl;
    this->_type = wrongcat._type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "Miaaaaou" << std::endl;
}
