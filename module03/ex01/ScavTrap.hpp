#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &src );
		ScavTrap &operator=(ScavTrap const &rhs);
		~ScavTrap( void );

		void setValue( void );
		void guardGate();

	private:

};

#endif