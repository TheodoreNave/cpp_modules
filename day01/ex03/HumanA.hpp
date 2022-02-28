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