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