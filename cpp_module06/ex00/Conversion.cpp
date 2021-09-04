#include "Conversion.hpp"

Conversion::Conversion(){}

Conversion::Conversion(const Conversion& conversion){
	(*this) = conversion;
}

Conversion::~Conversion(){
}

Conversion    &Conversion::operator=(const Conversion& conversion){
	_toChar = conversion._toChar;
	_toInt = conversion._toInt;
	_toFloat = conversion._toFloat;
	_toDouble = conversion._toDouble;
	_inf = conversion._inf;
	return (*this);
}

void	Conversion::setChar(char c){
	_toChar = c;
}

void	Conversion::setInt(int ConvertedValue){
	_toInt = ConvertedValue;
}

void	Conversion::setDouble(double ConvertedValue){
	_toDouble = ConvertedValue;
}

void	Conversion::setFloat(float ConvertedValue){
	_toFloat = ConvertedValue;
}

void	Conversion::setinf(std::string convertedValue){
	_inf = convertedValue;
}

void	Conversion::setTypeOfArgument(int type){
	_typeOfArgument = type;
}

char		Conversion::getChar(){
	return _toChar;
}

int			Conversion::getInt(){
	return _toInt;
}
float		Conversion::getFloat(){
	return _toFloat;
}
double		Conversion::getDouble(){
	return _toDouble;
}
std::string	Conversion::getinf(){
	return _inf;
}
int			Conversion::getTypeOfArgument(){
	return _typeOfArgument;
}

bool	valueIsChar(char *string){
	if((isprint(*string) && !isdigit(*string)) && strlen(string) == 1)
		return (true);
	return false;
}

bool	valueIsNan(char *string){
	std::string str(string);
	if (!str.compare("nan") || !str.compare("nanf"))
		return true;
	return false;
}

bool	valueIsInf(char *string){
	std::string str(string);
	if (!str.compare("+inf") || !str.compare("+inff") || !str.compare("-inf") || !str.compare("-inff"))
		return true;
	return false;
}

void	valueIsNumber(char *string, Conversion *conversion){
	int		i = 0;
	bool	checkInteger = false;
	if (string[i] == '+' || string[i] == '-')
		i++;
	while (isdigit(string[i])){
		if (!string[i + 1])
			checkInteger = true;
		i++;
	}
	if (checkInteger)
	{
		conversion->setInt(atoi(string));
		conversion->setTypeOfArgument(IntegerValue);
		return ;
	}
	else if (string[i]== '.'){
		i++;
		while(isdigit(string[i]))
			i++;
		if (!string[i]){
			conversion->setDouble(atof(string));
			conversion->setTypeOfArgument(DoubleValue);
		}
		else if (string[i] == 'f'){
			conversion->setFloat(atof(string));
			conversion->setTypeOfArgument(FloatValue);
		}
	}
}
