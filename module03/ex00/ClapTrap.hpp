#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const &src );
		ClapTrap &operator=(ClapTrap const &rhs);
		~ClapTrap( void );

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:

		std::string _name;
		unsigned int			_hit_points;		// 10
		unsigned int			_energy_points;		// 10
		unsigned int			_attack_damage;		// 0
};

#endif