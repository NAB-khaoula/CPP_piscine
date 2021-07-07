#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int 				_fixedPoint;
		static const int	_numberFractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const int integer);
		Fixed(const float floatingPoint);
		Fixed(const Fixed &fixed);
		~Fixed(void);
		int 				getRawBits( void ) const;
		void 				setRawBits( int const raw );
		int 				toInt( void ) const;
		float				toFloat(void) const;
		Fixed 				&operator= (Fixed const &fixed);
		Fixed				operator+ (Fixed const &fixed);
		Fixed				operator/ (Fixed const &fixed);
		Fixed				operator* (Fixed const &fixed);
		Fixed				operator- (Fixed const &fixed);
		Fixed				&operator++ ();
		Fixed				operator++ (int);
		Fixed				&operator-- ();
		Fixed				operator-- (int);
		static Fixed 		&min(Fixed &fixed1, Fixed &fixed2);
		static Fixed const	&min(Fixed const &fixed1, Fixed const &fixed2);
		static Fixed 		&max(Fixed &fixed1, Fixed &fixed2);
		static Fixed const	&max(Fixed const &fixed1, Fixed const &fixed2);
		bool		 		operator== (Fixed const &fixed);
		bool		 		operator!= (Fixed const &fixed);
		bool		 		operator>= (Fixed const &fixed);
		bool		 		operator<= (Fixed const &fixed);
		bool		 		operator< (Fixed const &fixed);
		bool		 		operator> (Fixed const &fixed);
};

std::ostream 	&operator<< (std::ostream &os, Fixed const &fixed);


#endif