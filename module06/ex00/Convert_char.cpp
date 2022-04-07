#include "Convert.hpp"

bool	Convert::CheckIsCharacter() {

	if (this->_value.length() == 1)
	{
		if ((this->_value[0] >= 32 && this->_value[0] <= 47) || (this->_value[0] >= 58 && this->_value[0] <= 126))
		{
			this->_char = static_cast<char>(this->_value[0]);
			this->is_char = 1;
			return true;
		}
	}
	return false;
}