#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {

	public:

		Fixed( void );							// Default constructeur
		Fixed(int const int_num);
		Fixed(float const float_num);
		Fixed( Fixed const &src );				// Constructeur copie
		Fixed &operator=( Fixed const &rhs );	// Constructeur affectation
		Fixed operator+( Fixed const &rhs );	// Constructeur affectation
		Fixed operator-( Fixed const &rhs );	// Constructeur affectation
		Fixed operator*( Fixed const &rhs );	// Constructeur affectation
		Fixed operator/( Fixed const &rhs );	// Constructeur affectation
		bool  operator>( Fixed const &rhs );	// Constructeur affectation
		bool  operator<( Fixed const &rhs );	// Constructeur affectation
		bool  operator>=( Fixed const &rhs );	// Constructeur affectation
		bool  operator<=( Fixed const &rhs );	// Constructeur affectation
		bool  operator==( Fixed const &rhs );	// Constructeur affectation
		bool  operator!=( Fixed const &rhs );	// Constructeur affectation
		Fixed  &operator++( void );				// Constructeur affectation
		Fixed  &operator--( void );				// Constructeur affectation
		Fixed  operator++( int  );				// Constructeur affectation
		Fixed  operator--( int );

		~Fixed( void );							// Default destructor
		int getRawBits( void ) const;			// return value virgule fixe
		void setRawBits( int const raw );		// init value virgule fixe
		float toFloat( void ) const;			// convert fixe to float
		int toInt( void ) const;
		static Fixed &min( Fixed &a, Fixed &b );
		static Fixed &max( Fixed &a, Fixed &b );

		static Fixed const &min( Fixed const &a, Fixed const &b );
		static Fixed const &max( Fixed const &a, Fixed const &b );



	private:									// convert fixe to int

		int 			 _rawBits;
		static int const _stockBits;		// assign litteral int 8

};

std::ostream &operator<<( std::ostream &o, Fixed const &rhs );


#endif
