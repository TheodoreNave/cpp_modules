// ************************************************************************** //
//                                                                            //
//                		HumanB.hpp for 42 School			              	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {

	public:

		HumanB( std::string str );
		~HumanB( void );

		void attack( void );
		void setWeapon(Weapon &axe);

	private:

		Weapon *_type;
		std::string _name;

};

#endif
