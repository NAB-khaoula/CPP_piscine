#include "Character.hpp"
#include <string>

Character::Character(){
	_index = 0;
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

Character::Character(std::string name): _name(name), _index(0) {}

Character::Character(const Character &character){
	(*this) = character;
}

Character &Character::operator=(const Character &character){
	this->_name = character._name;
    this->_index = character._index;
    for(int i = 0; i < 4; i++)
	    this->materia[i] = character.materia[i]->clone();
	return (*this);
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		delete this->materia[i];
}

std::string const &Character::getName() const{
	return _name;
}

void    Character::equip(AMateria* m){
	if(_index < 4 && this->materia[_index] == NULL)
	{
		this->materia[this->_index] = m;
		_index++;
	}
}

void	Character::unequip(int idx){
	if(_index < 4 && this->materia[_index] != NULL)
		this->materia[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target){
	if(idx < 4 && this->materia[idx])
		this->materia[idx]->use(target); 
}
