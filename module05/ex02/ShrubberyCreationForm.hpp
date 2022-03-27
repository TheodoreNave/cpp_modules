#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {

	class GradeTooHighException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	class GradeTooLowException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string name);
		ShrubberyCreationForm( ShrubberyCreationForm const &src );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);


};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);

#endif