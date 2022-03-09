#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"

class DiamondTrap : public ClapTrap {

	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const &src );
		DiamondTrap &operator=(DiamondTrap const &rhs);
		~DiamondTrap( void );

		void setValue( void );
		void whoAmI();

	private:

		std::string _name;
};

#endif