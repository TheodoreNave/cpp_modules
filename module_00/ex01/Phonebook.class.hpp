// ************************************************************************** //
//                                                                            //
//                	Phonebook.class.hpp for 42 School			         	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <iostream>
#include <cstdlib>

class Phonebook {

	public:
		Phonebook( void );
		~Phonebook( void );
		Contact all_contacts[8];
		int Search_contacts(void);
		int Look_for_contacts( int i );
		int cpp_atoi(std::string str);
};

#endif