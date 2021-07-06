#include "./Fixed.hpp"
# include <map>
Fixed::Fixed(void) : _fixedPoint(0) 
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
	// std::cout << "Int constructor called" << std::endl;
	_fixedPoint = integer << _numberFractionalBits;
}

Fixed::Fixed(const float floatingPoint)
{
	// std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(floatingPoint * (1 << _numberFractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
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
	return ((float)_fixedPoint / (float)(1 << _numberFractionalBits));
}

Fixed &Fixed::operator= (Fixed const &fixed)
{
	// std::cout << "Assignation operator called" << std::endl;
	_fixedPoint = fixed.getRawBits();
	return *this;
}

Fixed	Fixed::operator+ (Fixed const &fixed)
{
	Fixed result;
	result._fixedPoint = this->_fixedPoint + fixed._fixedPoint;
	return result;
}
Fixed	Fixed::operator- (Fixed const &fixed)
{
	Fixed result;
	result._fixedPoint = this->_fixedPoint - fixed._fixedPoint;
	return result;
}
Fixed	Fixed::operator* (Fixed const &fixed)
{
	Fixed result;
	result._fixedPoint = this->_fixedPoint * fixed.toFloat();
	return (result);
}

Fixed	Fixed::operator/ (Fixed const &fixed)
{
	Fixed result;
	result._fixedPoint = this->_fixedPoint / fixed.toFloat();
	return result;
}

std::ostream& 	operator<< (std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool		 	operator== (Fixed const &fixed1, Fixed const &fixed2)
{
	return(fixed1.getRawBits() == fixed2.getRawBits());
}

bool		 	operator!= (Fixed const &fixed1, Fixed const &fixed2)
{
	return(fixed1.getRawBits() != fixed2.getRawBits());
}

bool		 	operator>= (Fixed const &fixed1, Fixed const &fixed2)
{
	return(fixed1.getRawBits() >= fixed2.getRawBits());
}

bool		 	operator<= (Fixed const &fixed1, Fixed const &fixed2)
{
	return(fixed1.getRawBits() <= fixed2.getRawBits());
}

bool		 	operator> (Fixed const &fixed1, Fixed const &fixed2)
{
	return(fixed1.getRawBits() > fixed2.getRawBits());
}

bool		 	operator< (Fixed const &fixed1, Fixed const &fixed2)
{
	return(fixed1.getRawBits() < fixed2.getRawBits());
}

Fixed			&Fixed::operator++ ()
{
	this->_fixedPoint++;
	return (*this);
}

Fixed			Fixed::operator++ (int)
{
	Fixed fixed = *this;
	++*this;
	return (fixed);
}

Fixed			&Fixed::operator-- ()
{
	this->_fixedPoint--;
	return (*this);
}

Fixed			Fixed::operator-- (int)
{
	Fixed fixed = *this;
	--*this;
	return (fixed);
}

Fixed 			&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed2);
	return (fixed1);
}


Fixed	const	&Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed2);
	return (fixed1);
}

Fixed 			&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 <= fixed2)
		return (fixed2);
	return (fixed1);
}

Fixed	const	&Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1 <= fixed2)
		return (fixed2);
	return (fixed1);
}
