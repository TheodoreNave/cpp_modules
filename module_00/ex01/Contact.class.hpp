// ************************************************************************** //
//                                                                            //
//                		Contact.Class.hpp for 42 School			              //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>

class Contact {

	public:

		Contact(void);
		~Contact(void);

		int add_in_phonebook(int i);
		void print_values(void);
		void print_contact(void);

	private:

		static int _id;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string	phone_number;
		int 		index;

};


#endif