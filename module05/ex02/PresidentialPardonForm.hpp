#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"


class PresidentialPardonForm : public AForm {

	private:
		PresidentialPardonForm( void );

	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const &src );
		~PresidentialPardonForm( void );

		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		bool					execute(Bureaucrat const &executor) const;
		void setPardon( void ) const ;

		class GradeTooHighException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};

		class GradeTooLowException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs);

#endif