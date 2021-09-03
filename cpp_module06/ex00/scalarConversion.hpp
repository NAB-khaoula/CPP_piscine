#ifndef SCALARCONVERSION_HPP
#define SCALARCONVERSION_HPP
#define NonDisplayable 58
#define impossible -2
#include <iostream>
#include <cmath>

class   scalarConversion{
	private:
		bool		_character;
		char		_valueCharacter;
		bool		_integer;
		int			_valueInteger;
		bool		_floating;
		float		_valueFloat;
		bool		_double;
		double		_valueDouble;
		bool		_nan;
	public:
		scalarConversion();
		scalarConversion(const scalarConversion&);
		scalarConversion &operator=(const scalarConversion&);
		~scalarConversion();
		void	setCharacter(bool value);
		void	setValueCharacter(char c);
		void	setInteger(bool value);
		void	setValueInteger(int _integer);
		void	setFloat(bool value);
		void	setValueFloat(float value);
		void	setDouble(bool value);
		void	setValueDouble(double value);
		void	setNan(bool value);
		bool    getCharacter();
		char	getValueCharacter();
		bool    getInteger();
		int		getValueInteger();
		bool  	getFloat();
		float	getValueFloat();
		bool	getDouble();
		double	getValueDouble();
		bool	getNan();
};

scalarConversion	*valideLiteralValue(char *string);
int					printLiteralValue(scalarConversion *ScalarConversion);
#endif