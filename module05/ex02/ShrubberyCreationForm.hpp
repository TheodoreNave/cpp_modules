#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>



class ShrubberyCreationForm : public AForm {

	private:

		ShrubberyCreationForm( void );

	public:

		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const &src );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		bool					execute(Bureaucrat const &executor) const;
		void setTree() const ;

		class GradeTooHighException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};

		class GradeTooLowException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);

#endif