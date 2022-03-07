#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>


class Fixed {

	public:

		Fixed( void );							// Default constructeur
		Fixed(int const int_num);
		Fixed(float const float_num);
		Fixed( Fixed const &src );				// Constructeur copie
		Fixed &operator=( Fixed const &rhs );	// Constructeur affectation
		~Fixed( void );							// Default destructor
		int getRawBits( void ) const;			// return value virgule fixe
		void setRawBits( int const raw );		// init value virgule fixe
		float toFloat( void ) const;			// convert fixe to float
		int toInt( void ) const;


	private:									// convert fixe to int

		int 			 _rawBits;
		static int const _stockBits;		// assign litteral int 8

};

std::ostream &operator<<( std::ostream &o, Fixed const &rhs );


#endif

