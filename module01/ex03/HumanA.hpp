// ************************************************************************** //
//                                                                            //
//                		HumanA.Hpp for 42 School			              	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {

	public:

		HumanA( std::string name, Weapon &axe );
		~HumanA( void );

		void attack( void );

	private:

		Weapon &_type;
		std::string _name;

};

#endif
