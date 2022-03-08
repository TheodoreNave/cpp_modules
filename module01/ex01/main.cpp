// ************************************************************************** //
//                                                                            //
//                		main.cpp for 42 School			              	  	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

int main ( void )
{
	Zombie *undead;
	Zombie *undead_two;
	int i;

	i = 0;
	undead = zombieHorde(5, "George");
	while (i < 5)
	{
		undead[i].announce();
		i++;
	}
	i = 0;
	undead_two = zombieHorde(5, "Romero");
	while (i < 5)
	{
		undead_two[i].announce();
		i++;
	}
	delete [] undead;
	delete [] undead_two;
	return (0);
}
