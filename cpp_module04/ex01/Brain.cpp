#include "Brain.hpp"

Brain::Brain(){}

Brain::Brain(Brain const &brain){
    *this = brain;
}

Brain   const &Brain::operator= (Brain const &brain){
    for(int i = 0; i < 100; i++)
        _ideas[i] = brain._ideas[i];
    return(*this);
}

Brain::~Brain(){}