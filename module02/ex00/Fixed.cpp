#include "Fixed.hpp"

Fixed::Fixed( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed( int assignNum ) : _rawBits(assignNum) {

	return ;
}

Fixed::Fixed( Fixed const &src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=( Fixed const &rhs ) {

	std::cout << "Copy assignement operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits( int const raw ) {

	this->_rawBits = raw;
	return ;
}
