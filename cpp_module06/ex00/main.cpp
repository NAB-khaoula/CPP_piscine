#include "scalarConversion.hpp"


int main(int ac, char **av){
	if (ac == 2){
		scalarConversion *ScalarConversion = NULL;
		ScalarConversion = valideLiteralValue(av[1]);
		return (printLiteralValue(ScalarConversion));
	}
	else if (ac == 1)
		std::cout << "ERROR! Argument needed." << std::endl;
	else
		std::cout << "ERROR! Enter only one literal value!" << std::endl;
	return (0);
}
