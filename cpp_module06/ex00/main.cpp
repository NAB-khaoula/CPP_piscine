#include "Conversion.hpp"

Conversion	*checkLiteralValue(char *string){
	Conversion *conversion = new Conversion();
	if (valueIsChar(string))
		conversion->setValideArgument(true);
	else if (valueIsNan(string))
	{
		std::string str(string);
		conversion->setinf(str);
	}
	else if (valueIsInf(string))
	{
		std::string str(string);
		if (str.compare("+inff") || str.compare("-inff"))
			str.erase(4,1);
		conversion->setinf(str);
	}
	else
		valueIsNumber(string, conversion);
	return conversion;
}

int	printLiteralValue(Conversion *conversion, char *string){
	if (conversion->getSpecialCase())
		printSpecialCase(conversion->getinf());
	else if (conversion->getValideArgument() )
		printResult(static_cast<float>(atof(string)));
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
		return (printLiteralValue(conversion, av[1]));
	}
	else if (ac == 1)
		std::cout << "ERROR! Argument needed." << std::endl;
	else
		std::cout << "ERROR! Enter only one literal value!" << std::endl;
	return (0);
}
