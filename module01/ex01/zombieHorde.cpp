// ************************************************************************** //
//                                                                            //
//                		zombieHorde.cpp for 42 School			              //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie *ptr = new Zombie[N];
	int i;

	i = 0;
	while (i < N)
	{
		ptr[i].give_name(name);
		i++;
	}
	return (ptr);
}
