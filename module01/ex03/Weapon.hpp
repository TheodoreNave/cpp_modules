// ************************************************************************** //
//                                                                            //
//                		Weapon.hpp for 42 School			              	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {

	public:

		Weapon( std::string arme );
		~Weapon( void );
		const std::string &getType();
		void setType(std::string str);

	private:
		std::string _type;
};

#endif