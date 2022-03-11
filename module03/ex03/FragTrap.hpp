#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
// #include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:

		FragTrap( void );
		FragTrap( std::string name ):ClapTrap(name) { };
		FragTrap( FragTrap const &src );
		FragTrap &operator=(FragTrap const &rhs);
		~FragTrap( void );

		void setValue( void );
		void highFivesGuys(void);


	// private:

};

#endif