#include "Conversion.hpp"

Conversion	*checkLiteralValue(char *string){
	Conversion *conversion = new Conversion();
	if (valueIsChar(string))
	{
		conversion->setChar(*string);
		conversion->setTypeOfArgument(CharValue);
	}
	else if (valueIsNan(string))
	{
		conversion->setTypeOfArgument(NanValue);
	}
	else if (valueIsInf(string))
	{
		std::string str(string);
		if (str.compare("+inff") || str.compare("-inff"))
			str.erase(4,1);
		conversion->setinf(str);
		conversion->setTypeOfArgument(InfValue);
	}
	else
		valueIsNumber(string, conversion);
	return conversion;
}

int	printLiteralValue(Conversion *conversion){
	if (conversion->getTypeOfArgument() == NanValue){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (conversion->getTypeOfArgument() == InfValue){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << conversion->getinf() << "f" << std::endl;
		std::cout << "double: " << conversion->getinf()  << std::endl;
	}
	else if (conversion->getTypeOfArgument() == CharValue){
		std::cout << "char: '" << conversion->getChar() << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(conversion->getChar()) << std::endl;
		std::cout << "float: " << static_cast<float>(conversion->getChar()) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(conversion->getChar()) << ".0"<< std::endl;
	}
	else if (conversion->getTypeOfArgument() == FloatValue){
		if (isprint(static_cast<char>(conversion->getFloat())))
			std::cout << "char: '" << static_cast<char>(conversion->getFloat()) << "'" << std::endl;
		else
			std::cout << "char: Non displayable"<< std::endl;
		std::cout << "int: " << static_cast<int>(conversion->getFloat()) << std::endl;
		std::cout << "float: " << conversion->getFloat();
		if ((static_cast<int>(conversion->getFloat() * 10.0) % 10) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(conversion->getFloat());
		if ((static_cast<int>(conversion->getFloat() * 10.0) % 10) == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
	else if (conversion->getTypeOfArgument() == DoubleValue){
		if (isprint(static_cast<char>(conversion->getDouble()) ))
			std::cout << "char: '" << static_cast<char>(conversion->getDouble())  << "'" << std::endl;
		else
			std::cout << "char: Non displayable"<< std::endl;
		std::cout << "int: " << static_cast<int>(conversion->getDouble()) << std::endl;
		std::cout << "float: " << static_cast<float>(conversion->getDouble());
		if (((static_cast<int>(conversion->getDouble() * 10) % 10 )== 0))
			std::cout << ".0";
		std::cout << "f" << std::endl;
		std::cout << "double: " <<conversion->getDouble();
		if ((static_cast<int>(conversion->getDouble() * 10.0)) % 10 == 0)
			std::cout << ".0" << std::endl;
	}
	else if (conversion->getTypeOfArgument() == IntegerValue){
		if (isprint(static_cast<char>(conversion->getInt())))
			std::cout << "char: '" << static_cast<char>(conversion->getInt())  << "'" << std::endl;
		else
			std::cout << "char: Non displayable"<< std::endl;
		std::cout << "int: " << conversion->getInt() << std::endl;
		std::cout << "float: " << static_cast<float>(conversion->getInt()) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(conversion->getInt()) << ".0" << std::endl;
	}
	else{
		std::cout << "ERROR! not a valid literal value!" << std::endl;
		delete conversion;
		return (1);
	}
	delete conversion;
	return (0);
}

int main(int ac, char **av){
	if (ac == 2){
		Conversion *conversion = checkLiteralValue(av[1]);
		return (printLiteralValue(conversion));
	}
	else if (ac == 1)
		std::cout << "ERROR! Argument needed." << std::endl;
	else
		std::cout << "ERROR! Enter only one literal value!" << std::endl;
	return (0);
}
