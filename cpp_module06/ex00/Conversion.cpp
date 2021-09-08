#include "Conversion.hpp"

Conversion::Conversion(): _valideArgument(false), _specialCase(false){}

Conversion::Conversion(const Conversion& conversion){
	(*this) = conversion;
}

Conversion::~Conversion(){
}

Conversion    &Conversion::operator=(const Conversion& conversion){
	_valideArgument = conversion._valideArgument;
	return (*this);
}

void	Conversion::setValideArgument(bool	type){
	_valideArgument = type;
}

bool	Conversion::getValideArgument(){
	return	_valideArgument;
}

void	Conversion::setSpecialCase(bool	type){
	_specialCase = type;
}

bool	Conversion::getSpecialCase(){
	return	_specialCase;
}

void	Conversion::setinf(std::string value){
	_inf = value;
}

std::string	Conversion::getinf(){
	return _inf;
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
		conversion->setValideArgument(true);
	else if (string[i]== '.'){
		i++;
		while(isdigit(string[i]))
			i++;
		if (!string[i])
			conversion->setValideArgument(true);
		else if (string[i] == 'f')
			conversion->setValideArgument(true);
	}
}

void	printResult(float result){
	if (isprint(static_cast<int>(result)))
		std::cout << "char: '" << static_cast<char>(result)  << "'" << std::endl;
	else
		std::cout << "char: Non displayable"<< std::endl;
	std::cout << "int: " << static_cast<int>(result) << std::endl;
	std::cout << "float: " << static_cast<float>(result);
	if (((static_cast<int>(result * 10000.0) % 10000 )== 0))
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(result);
	if ((static_cast<int>(result * 10000.0)) % 10000 == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void	printSpecialCase(std::string result){
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << result << "f" << std::endl;
	std::cout << "double: " << result  << std::endl;
}
