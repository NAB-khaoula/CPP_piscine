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
		conversion->setinf("nan");
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
		printSpecialCase(conversion->getinf());
	}
	else if (conversion->getTypeOfArgument() == InfValue){
		printSpecialCase(conversion->getinf());
	}
	else if (conversion->getTypeOfArgument() == CharValue){
		printResult(static_cast<double>(conversion->getChar()));
	}
	else if (conversion->getTypeOfArgument() == FloatValue){
		printResult(static_cast<double>(conversion->getFloat()));
	}
	else if (conversion->getTypeOfArgument() == DoubleValue){
		printResult(conversion->getDouble());
	}
	else if (conversion->getTypeOfArgument() == IntegerValue){
		printResult(static_cast<double>(conversion->getInt()));
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
