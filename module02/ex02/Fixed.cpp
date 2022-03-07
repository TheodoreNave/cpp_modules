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

	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = int_num * (1 << _stockBits);
	return ;
}

Fixed::Fixed( float const float_num ) {

	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(float_num * (1 << _stockBits));
	return ;
}

float Fixed::toFloat( void ) const {

	return ((float)(this->_rawBits) / (1 << this->_stockBits));
}

int	Fixed::toInt( void ) const {

	return (this->_rawBits / (1 << this->_stockBits));
}

std::ostream &operator<<( std::ostream &o, Fixed const &rhs ) {

	o << rhs.toFloat();
	return o;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

int const Fixed::_stockBits = 8;


