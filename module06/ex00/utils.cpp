#include "Convert.hpp"

void	Convert::convert_char() {

	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
	return ;
}

void	Convert::convert_int() {

	this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
	return ;
}

void	Convert::convert_float() {

	this->_char = static_cast<char>(this->_float);
	this->_int = static_cast<int>(this->_float);
	this->_double = static_cast<double>(this->_float);
	return ;
}

void	Convert::convert_double() {

	this->_char = static_cast<char>(this->_double);
	this->_int = static_cast<int>(this->_double);
	this->_float = static_cast<float>(this->_double);
	return ;
}

long Convert::ft_stoi( std::string s ) {

    long i = 0;
    std::istringstream(s) >> i;
	if (std::numeric_limits<int>::max() < i || i < std::numeric_limits<int>::min())
	{
		this->stoi = 1;
		i = 0;
		return i;
	}
	return i;
}

bool 	is_digit(char c) {

	if (c >= '0' && c <= '9')
		return true;
	return false;
}
char Convert::getChar() {

	 return this->_char;
}

int Convert::getInt() {

	 return this->_int;
}

float Convert::getFloat() {

	 return this->_float;
}

double Convert::getDouble() {

	 return this->_double;
}