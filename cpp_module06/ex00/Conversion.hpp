#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <cmath>

#define		IntegerValue 1
#define		CharValue 2
#define		FloatValue 3
#define		DoubleValue 4
#define		InfValue 5
#define		NanValue 6
#define		NonDisplayable 7

class   Conversion{
	private:
		bool		_valideArgument;
		bool		_specialCase;
		std::string	_inf;
	public:
		Conversion();
		Conversion(const Conversion&);
		Conversion &operator=(const Conversion&);
		~Conversion();
		void		setValideArgument(bool type);
		void		setSpecialCase(bool type);
		void		setinf(std::string value);
		std::string	getinf();
		bool		getValideArgument();
		bool		getSpecialCase();
};

bool		valueIsChar(char *string);
bool		valueIsNan(char *string);
bool		valueIsInf(char *string);
void		valueIsNumber(char *string, Conversion *conversion);
Conversion	*checkLiteralValue(char *string);
int			printLiteralValue(Conversion *conversion, char *string);
void		printResult(float result);
void		printSpecialCase(std::string result);
#endif