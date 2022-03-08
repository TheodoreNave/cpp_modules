// ************************************************************************** //
//                                                                            //
//                		HumanB.cpp for 42 School			              	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

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
