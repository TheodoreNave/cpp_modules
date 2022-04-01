#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Intern {

	private:

		std::string _name;

	public:

		Intern( void );
		Intern( std::string name);
		Intern( Intern const &src );
		~Intern( void );

		Intern &operator=(Intern const &rhs);

		std::string getName( void ) const ;
		int getGrade( void ) const ;
		void signForm(AForm &form);
		void increm( void );
		void decrem( void );
		void executeForm( AForm const & form );
		AForm* makeForm( std::string form_name, std::string form_target );

		class GradeTooHighException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};

		class GradeTooLowException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};

};

std::ostream &operator<<(std::ostream &o, Intern const &rhs);

#endif