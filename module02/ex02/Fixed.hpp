#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {

	public:

		Fixed( void );
		Fixed(int const int_num);
		Fixed(float const float_num);
		Fixed( Fixed const &src );
		Fixed &operator=( Fixed const &rhs );
		Fixed operator+( Fixed const &rhs );
		Fixed operator-( Fixed const &rhs );
		Fixed operator*( Fixed const &rhs );
		Fixed operator/( Fixed const &rhs );
		bool  operator>( Fixed const &rhs );
		bool  operator<( Fixed const &rhs );
		bool  operator>=( Fixed const &rhs );
		bool  operator<=( Fixed const &rhs );
		bool  operator==( Fixed const &rhs );
		bool  operator!=( Fixed const &rhs );
		Fixed  &operator++( void );
		Fixed  &operator--( void );
		Fixed  operator++( int  );
		Fixed  operator--( int );

		~Fixed( void );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed &min( Fixed &a, Fixed &b );
		static Fixed &max( Fixed &a, Fixed &b );

		static Fixed const &min( Fixed const &a, Fixed const &b );
		static Fixed const &max( Fixed const &a, Fixed const &b );



	private:

		int 			 _rawBits;
		static int const _stockBits;

};

std::ostream &operator<<( std::ostream &o, Fixed const &rhs );


#endif
