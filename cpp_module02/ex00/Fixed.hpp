#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int 			_fixedPoint;
		static const int	_numberFractionalBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed() : _fixedPoint(0) {}
};

Fixed::Fixed(/* args */)
{
}

Fixed::~Fixed()
{
}



#endif