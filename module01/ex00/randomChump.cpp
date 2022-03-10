// ************************************************************************** //
//                                                                            //
//                		randomChump.cpp for 42 School			              //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

void randomChump( std:: string name ) {

	Zombie pile = Zombie();
	pile.give_name(name);
	pile.announce();
	return ;
}