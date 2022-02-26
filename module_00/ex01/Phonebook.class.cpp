// ************************************************************************** //
//                                                                            //
//                	Phonebook.class.cpp for 42 School			          	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include "Phonebook.class.hpp"

Phonebook::Phonebook( void ) {

	return ;
}

int Phonebook::Search_contacts( void ) {

	int i;

	i = 0;
	while (i < 8)
	{
		this->all_contacts[i].print_values();
		i++;
	}
	return 0;
}

int Phonebook::cpp_atoi(std::string str) {

	long int	i;
	long int	res;
	long int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int Phonebook::Look_for_contacts ( int i ) {

	std::string val;

	while (1) {

		std::cout << "Enter index to find contacts : ";
		std::getline(std::cin, val);

		int num = cpp_atoi(val);
		if (num > 0 && num < i + 1)
			return (num);
		else
			std::cout << "No contact found !" << std::endl;
	}
	return 0;
}

Phonebook::~Phonebook( void ) {

	return ;
}
