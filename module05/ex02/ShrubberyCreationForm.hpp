#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {

	private:

		ShrubberyCreationForm( void );

	class GradeTooHighException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	class GradeTooLowException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	public:

		ShrubberyCreationForm( std::string name);
		ShrubberyCreationForm( ShrubberyCreationForm const &src );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

		void setTree();
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);

#endif