#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:

		Fixed( void );							// Default constructeur
		Fixed( int assignNum );					// Con
		Fixed( Fixed const &src );				// Constructeur copie
		Fixed &operator=( Fixed const &rhs );	// Constructeur affectation
		~Fixed( void );							// Default destructor
		int getRawBits( void ) const;			// return value virgule fixe
		void setRawBits( int const raw );		// init value virgule fixe


	private:

		int 			 _rawBits;
		static int const _stockBits;		// assign litteral int 8

};



#endif