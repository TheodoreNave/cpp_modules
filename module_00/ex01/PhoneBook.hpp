// ************************************************************************** //
//                                                                            //
//                	   Phonebook.hpp for 42 School			         	      //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>

class PhoneBook {

	public:

		PhoneBook( void );
		~PhoneBook( void );
		Contact all_contacts[8];
		int Search_contacts(void);
		int Look_for_contacts( int i );
		int cpp_atoi(std::string str);
};

#endif
