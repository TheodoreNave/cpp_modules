#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed( Fixed const &src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed &Fixed::operator=( Fixed const &rhs ) {

	std::cout << "Copy assignement operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return (*this);
}


int Fixed::getRawBits( void ) const {

	return this->_rawBits;
}

void Fixed::setRawBits( int const raw ) {

	this->_rawBits = raw;
	return ;
}

Fixed::Fixed( int const int_num ) {

	setRawBits(int_num * toInt());
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const float_num ) {

	setRawBits(roundf(float_num * toFloat()));
	std::cout << "Float constructor called" << std::endl;
	return ;
}

float Fixed::toFloat( void ) const {

	return ((float)(getRawBits() / (1 << this->_stockBits)));
}

int	Fixed::toInt( void ) const {

	return (getRawBits() / (1 << this->_stockBits));
}

std::ostream &operator<<( std::ostream &o, Fixed const &rhs ) {

	o << rhs.getRawBits();
	return o;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

int const Fixed::_stockBits = 8;