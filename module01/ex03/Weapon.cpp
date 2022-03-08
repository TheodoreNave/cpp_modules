// ************************************************************************** //
//                                                                            //
//                		Weapon.cpp for 42 School			              	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

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
