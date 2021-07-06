#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int 			_fixedPoint;
		static const int	_numberFractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const int integer);
		Fixed(const float floatingPoint);
		Fixed(const Fixed &fixed);
		~Fixed(void);
		Fixed 			&operator= (Fixed const &fixed);
		int 			getRawBits( void ) const;
		void 			setRawBits( int const raw );
		int 			toInt( void ) const;
		float			toFloat(void) const;
};

std::ostream 	&operator<< (std::ostream &os, Fixed const &fixed);

#endif