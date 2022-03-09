// ************************************************************************** //
//                                                                            //
//                		main.cpp for 42 School			              	  	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

int main( void ) {

	Zombie zombie("George");
	zombie.announce();

	Zombie *ptr = newZombie("Iggy");
	ptr->announce();

	randomChump("Frankenstein");

	delete ptr;
	return (0);
}
