// ************************************************************************** //
//                                                                            //
//                		Zombie.hpp for 42 School			              	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:

		Zombie( void );
		~Zombie( void );

		void announce( void );
		void announce( int i );
		void give_name( std::string name );


	private:

		std::string _name;

};

Zombie* newZombie( std::string name );

void randomChump( std:: string name );

#endif
