#include "HumanB.hpp"

HumanB::HumanB( std::string str ) {

	this->_name = str;

	return ;
}

HumanB::~HumanB( void ) {

	return ;
}

void HumanB::setWeapon(Weapon &axe)
{
	this->_type = &axe;
}

void HumanB::attack( void ) {

	std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
}
