#include "Character.hpp"

Character::Character(){
}

Character::Character(const Character &character){
    (*this) = character;
}

Character &Character::operator=(const Character &){

}

Character::~Character(){
}

std::string const &Character::getName() const{
    return _name;
}

void    Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++)
        this->materia[i] = m;
}
