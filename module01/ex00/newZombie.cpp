// ************************************************************************** //
//                                                                            //
//                		Zombie.cpp for 42 School			              	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {

	Zombie *ptr = new Zombie();
	ptr->give_name(name);
	return (ptr);
}
