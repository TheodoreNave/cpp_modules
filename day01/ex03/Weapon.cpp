#include "Weapon.hpp"

Weapon::Weapon( std::string arme ) {

	this->_type = arme;
	return ;
}

Weapon::~Weapon( void ) {

	return ;
}

const std::string &Weapon::getType() {

	std::string &ref = this->_type;
	return (ref);
}

void Weapon::setType( std::string str ) {

	this->_type = str;
	return ;
}
