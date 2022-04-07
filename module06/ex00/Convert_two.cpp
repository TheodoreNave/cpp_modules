#include "Convert.hpp"

Convert::Convert( void ) {

	return ;
}

Convert::Convert( std::string conv ) : _value(conv) {

	return ;
}


Convert::Convert( Convert const &src ) {

	*this = src;
	return ;
}

Convert &Convert::operator=( Convert const &rhs ) {

	this->_char = rhs._char;
	this->_int = rhs._int;
	this->_float = rhs._float;
	this->_double = rhs._double;
	return *this;
}

Convert::~Convert( void ) {

	return ;
}

