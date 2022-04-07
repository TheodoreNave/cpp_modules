#include "Convert.hpp"

bool 	Convert::checkIsInt() {

	size_t i = 0;
	int res = 0;


	std::string val = this->_value;
	if (this->_value[i] == '+' || this->_value[i] == '-')
		i++;
	while (this->_value[i] >= '0' && this->_value[i] <= '9')
		i++;
	if (this->_value[i] == '.')
	{
		this->is_float = 1;
		return false;
	}
	if (i != val.length())
		return false;
	res = ft_stoi(this->_value);
	if (res == 0 && this->stoi == 1)
	{
		std::cout << "Impossible : input overflow" << std::endl;
		return false;
	}
	else
	{
		this->_int = static_cast<int>(res);
		this->is_int = 1;
		return true;
	}
	return false;
}