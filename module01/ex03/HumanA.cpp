#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &axe ) : _type(axe) , _name(name) {

	return ;
}

HumanA::~HumanA( void ) {

	return ;
}

void HumanA::attack( void ) {

	std::cout << this->_name << " attacks with their " << this->_type.getType() << std::endl;
}
