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