#include "scalarConversion.hpp"

scalarConversion::scalarConversion() : _character(false), _integer(false), _floating(false), _double(false), _nan(false) {
}

scalarConversion::scalarConversion(const scalarConversion& ScalarConversion){
	(*this) = ScalarConversion;
}

scalarConversion::~scalarConversion(){
}

scalarConversion    &scalarConversion::operator=(const scalarConversion& ScalarConversion){
	_character = ScalarConversion._character;
	_integer = ScalarConversion._integer;
	_floating = ScalarConversion._floating;
	_double = ScalarConversion._double;
	return (*this);
}

void    scalarConversion::setCharacter(bool value){
	_character = value;
}

void	scalarConversion::setValueCharacter(char c){
	_valueCharacter = c;
}

void    scalarConversion::setInteger(bool value){
	_integer = value;
}

void	scalarConversion::setValueInteger(int value){
	_valueInteger = value;
}

void    scalarConversion::setFloat(bool value){
	_floating = value;
}

void	scalarConversion::setValueFloat(float value){
	_valueFloat = value;
}

void    scalarConversion::setDouble(bool value){
	_double = value;
}

void	scalarConversion::setValueDouble(double value){
	_valueDouble = value;
}

void	scalarConversion::setNan(bool value){
	_nan = value;
}

bool    scalarConversion::getCharacter(){
	return _character;
}

char	scalarConversion::getValueCharacter(){
	return _valueCharacter;
}

bool    scalarConversion::getInteger(){
	return _integer;
}

int		scalarConversion::getValueInteger(){
	return _valueInteger;
}

bool    scalarConversion::getFloat(){
	return _floating;
}

float	scalarConversion::getValueFloat(){
	return _valueFloat;
}

bool    scalarConversion::getDouble(){
	return _double;
}

double	scalarConversion::getValueDouble(){
	return _valueDouble;
}

bool	scalarConversion::getNan(){
	return _nan;
}

bool	valueIsCharacter(char *string){
	if(isalpha(*string) && strlen(string) == 1)
		return (true);
	return false;
}

bool	valueIsNumber(char *string){
	if (isdigit(*string) || *string == '+' || *string == '-')
		return true;
	return false;
}

bool	valueIsNan(char *string){
	std::string str(string);
	if (!str.compare("nan") || !str.compare("nanf"))
		return true;
	return false;
}

scalarConversion	*valideLiteralValue(char *string){
	scalarConversion *ScalarConversion = new scalarConversion();
	if (valueIsCharacter(string)){
		ScalarConversion->setCharacter(true);
		ScalarConversion->setValueCharacter(*string);
		return ScalarConversion;
	}
	else if (valueIsNan(string))
		ScalarConversion->setNan(true);
	else if(valueIsNumber(string)){
		// ScalarConversion->setCharacter();
		// either integer or double or floating
		//function to check which type of integer we want;
	}
	return ScalarConversion;
}

int	printLiteralValue(scalarConversion *ScalarConversion){
	if (ScalarConversion->getNan()){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (ScalarConversion->getCharacter())
	{
		std::cout << "char: '" << ScalarConversion->getValueCharacter() << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(ScalarConversion->getValueCharacter()) << std::endl;
		std::cout << "float: " << static_cast<float>(ScalarConversion->getValueCharacter()) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(ScalarConversion->getValueCharacter()) << std::endl;
	}
	else if (ScalarConversion->getFloat()){
		std::cout << "char: '" << static_cast<char>(ScalarConversion->getValueFloat()) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(ScalarConversion->getValueFloat()) << std::endl;
		std::cout << "float: " << ScalarConversion->getValueFloat() << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(ScalarConversion->getValueFloat()) << std::endl;
	}
	else if (ScalarConversion->getDouble()){
		std::cout << "char: '" << static_cast<char>(ScalarConversion->getValueDouble()) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(ScalarConversion->getValueDouble()) << std::endl;
		std::cout << "float: " << static_cast<float>(ScalarConversion->getValueDouble()) << "f" << std::endl;
		std::cout << "double: " << ScalarConversion->getValueDouble() << std::endl;
	}
	else if (ScalarConversion->getInteger()){
		std::cout << "char: '" << static_cast<char>(ScalarConversion->getValueInteger()) << "'" << std::endl;
		std::cout << "int: " << ScalarConversion->getValueInteger() << std::endl;
		std::cout << "float: " << static_cast<float>(ScalarConversion->getValueInteger()) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(ScalarConversion->getValueInteger()) << std::endl;
	}
	else{
		std::cout << "ERROR! not a valid literal value!" << std::endl;
		return (1);
	}
	delete ScalarConversion;
	return (0);
}
