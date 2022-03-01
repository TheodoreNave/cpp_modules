// ************************************************************************** //
//                                                                            //
//                		  Contact.hpp for 42 School			                  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {

	public:

		Contact(void);
		~Contact(void);

		int add_in_phonebook(int i);
		void print_values(void);
		void print_contact(void);
		int secure_entry(std::string str, std::string *data);


	private:

		int 		_index;
		static int 	_id;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _darkest_secret;
		std::string	_phone_number;

};

#endif
