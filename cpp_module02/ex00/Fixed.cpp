#include "./Fixed.hpp"

Fixed::Fixed(const int fixedPoint) : _fixedPoint(fixedPoint) {}

Fixed::Fixed(const Fixed &fixed) : _fixedPoint(fixed._fixedPoint) {}

Fixed &Fixed::operator= (Fixed const &fixed)
{
    _fixedPoint = fixed._fixedPoint;
    return *this;
}

Fixed::Fixed()
{
}

Fixed::~Fixed()
{
}

int main()
