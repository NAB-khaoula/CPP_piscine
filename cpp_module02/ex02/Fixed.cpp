#include "./Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = integer << _numberFractionalBits;
}

Fixed::Fixed(const float floatingPoint)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(floatingPoint * (1 << _numberFractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return _fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
	_fixedPoint = raw;
}

int	Fixed::toInt(void) const
{
	return (_fixedPoint >> _numberFractionalBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPoint / (1 << _numberFractionalBits));
}

Fixed &Fixed::operator= (Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixedPoint = fixed.getRawBits();
	return *this;
}

std::ostream& 	operator<< (std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}
