// ************************************************************************** //
//                                                                            //
//                		main.cpp for 42 School			              	  	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include "Karen.hpp"

int main (int ac, char **av) {

	if (ac != 2)
		return (0);

	Karen instance;

	instance.complain(av[1]);
}
