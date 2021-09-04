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
		int			_toInt;
		char		_toChar;
		float		_toFloat;
		double		_toDouble;
		std::string	_inf;
		int			_typeOfArgument;
	public:
		Conversion();
		Conversion(const Conversion&);
		Conversion &operator=(const Conversion&);
		~Conversion();
		void		setChar(char c);
		void		setInt(int convertedValue);
		void		setFloat(float convertedValue);
		void		setDouble(double convertedValue);
		void		setinf(std::string convertedValue);
		void		setTypeOfArgument(int type);
		char		getChar();
		int			getInt();
		float		getFloat();
		double		getDouble();
		std::string	getinf();
		int			getTypeOfArgument();
};

bool		valueIsChar(char *string);
bool		valueIsNan(char *string);
bool		valueIsInf(char *string);
void		valueIsNumber(char *string, Conversion *conversion);
Conversion	*checkLiteralValue(char *string);
int			printLiteralValue(Conversion *conversion);

#endif