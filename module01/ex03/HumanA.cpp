// ************************************************************************** //
//                                                                            //
//                		HumanA.cpp for 42 School			              	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

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
