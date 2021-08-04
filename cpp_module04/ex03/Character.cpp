#include "Character.hpp"

Character::Character(){
}

Character::Character(std::string name): _name(name){}

Character::Character(const Character &character){
	(*this) = character;
}

Character &Character::operator=(const Character &character){
	this->_name = character._name;
	this->materia = new AMateria();
}

Character::~Character(){
	delete this->materia;
}

std::string const &Character::getName() const{
	return _name;
}

void    Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++)
	{
		if(this->materia[i].empty())
			this->materia[i] = m;
	}
}

void	Character::unequip(int idx){
	if(this->materia[i].empty())
		this->materia[idx].clear(); 
}

void    Character::use(int idx, ICharacter& target){
	this->materia[idx].use(target); 
}
