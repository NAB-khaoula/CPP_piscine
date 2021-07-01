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
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed(void);
		Fixed &operator= (Fixed const &fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif