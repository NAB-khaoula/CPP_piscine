#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default constructor has been called" << std::endl;
}

Brain::Brain(Brain const &brain){
    std::cout << "Brain Copy constructor has been called" << std::endl;
    *this = brain;
}

Brain   const &Brain::operator= (Brain const &brain){
    std::cout << "Brain Assignment operator has been called" << std::endl;
    for(int i = 0; i < 100; i++)
        _ideas[i] = brain._ideas[i];
    return(*this);
}

Brain::~Brain(){
    std::cout << "Brain destructor has been called" << std::endl;
}