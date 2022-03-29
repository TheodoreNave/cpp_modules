#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"


class PresidentialPardonForm : public AForm {

	class GradeTooHighException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	class GradeTooLowException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string name );
		PresidentialPardonForm( PresidentialPardonForm const &src );
		~PresidentialPardonForm( void );

		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		bool					execute(Bureaucrat const &executor) const;
		void setPardon( void ) const ;

};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs);

#endif