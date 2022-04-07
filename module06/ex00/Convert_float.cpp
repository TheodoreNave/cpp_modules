#include "Convert.hpp"

bool 	Convert::CheckIsFloat_Double() {

	std::string val = this->_value;
	int len = val.length();
	int i = 0;
	int point = 0;

	if (this->_value[i] == '+' || this->_value[i] == '-')
		i++;
	while (this->_value[i] >= '0' && this->_value[i] <= '9')
	{
		i++;
	}
	if (this->_value[i] == '.')
	{
		point = 1;
		i++;
	}
	while (this->_value[i] >= '0' && this->_value[i] <= '9')
		i++;
	if (i == len)
	{
		this->is_float = 0;
		this->is_double = 1;
		this->_double = strtod(this->_value.c_str(), NULL);
		return true;
	}
	if (this->_value[i] == 'f' && ++i == len && point == 1)
	{
		this->is_float = 1;
		this->is_double = 0;
		this->_float = atof(this->_value.c_str());
		return true;
	}
	return false;
}
