#include "Convert.hpp"

bool Convert::ValueConvertor() {

	if (this->CheckIsCharacter())
	{
		convert_char();
	}
	else if (this->checkIsInt())
	{
		convert_int();
		if (this->stoi == 1)
			return false;
	}
	else if (this->CheckIsFloat_Double() && this->is_float == 1)
	{
		convert_float();
	}
	else if (this->CheckIsFloat_Double() && this->is_double == 1)
	{
		convert_double();
	}
	else
	{
		std::cout << "Not a valid parameter" << std::endl;
		this->error = 1;
		return false;
	}
	return true;
}

void Convert::checkWhichConvert() {

	if (this->_value.empty())
	{
		std::cout << "String is empty" << std::endl;
		return ;
	}
	if (checkIsNanOrInf())
	{
		print_function();
		return ;
	}
	else
	{
		ValueConvertor();
		if (this->error == 1)
			return ;
		print_function_two();
	}
	return ;
}

bool 	Convert::checkIsNanOrInf() {

	if (this->_value.compare("nan") == 0 || this->_value.compare("nanf") == 0)
	{

		this->char_str = "'impossible'";
		this->int_str = "impossible";
		this->float_str = "nan";
		this->double_str = "nan";
		return true;
	}
	if (this->_value.compare("+inf") == 0 || this->_value.compare("+inff") == 0)
	{
		this->char_str = "'impossible'";
		this->int_str = "impossible";
		this->float_str = "+inf";
		this->double_str = "+inf";
		return true;
	}
	if (this->_value.compare("-inf") == 0 || this->_value.compare("-inff") == 0)
	{

		this->char_str = "'impossible'";
		this->int_str = "impossible";
		this->float_str = "-inf";
		this->double_str = "-inf";
		return true;
	}
	return false;
}

