#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:
		void announce( void );
		void give_name( std::string name );
		Zombie( void );
		~Zombie( void );

	private:
		std::string _name;

};

Zombie * zombieHorde( int N, std::string name );


#endif