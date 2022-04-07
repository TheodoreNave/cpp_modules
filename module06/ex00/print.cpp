#include "Convert.hpp"

void Convert::print_function() {

	std::cout << "char: " << this->char_str << std::endl;
	std::cout << "int: " << this->int_str << std::endl;
	std::cout << "float: " << this->float_str << "f" << std::endl;
	std::cout << "double: " << this->double_str << std::endl;
	return ;
}

void Convert::overflow() {

	if (std::numeric_limits<float>::max() < this->_double || -std::numeric_limits<float>::max() > this->_double)
	{
		this->not_print_float = -1;
	}
	if (std::numeric_limits<int>::max() < this->_double || std::numeric_limits<int>::min() > this->_double)
	{
		this->not_print_int = -1;
	}
	return ;
}

void Convert::print_function_two() {

	if (this->stoi != 1)
	{
		overflow();
		if (this->_int < 32 || this->_int > 127)
			std::cout << "char: 'Non displayable'" << std::endl;
		else
			std::cout << "char: '" << this->_char << "'" << std::endl;
		if (this->not_print_int != -1)
			std::cout << "int: " << std::to_string(this->_int) << std::endl;
		else
			std::cout << "int: error Overflow" << std::endl;
		if (this->not_print_float != -1)
			std::cout << "float: " << std::to_string(this->_float) << "f" << std::endl;
		else
			std::cout << "float: error Overflow" << std::endl;

		std::cout << "double: " << std::to_string(this->_double) << std::endl;
	}
	return ;
}