#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

	private:

		std::string _name;
		int 		_grade;

	class GradeTooHighException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	class GradeTooLowException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	public:

		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const &src );
		~Bureaucrat( void );

		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string getName( void ) const ;
		int getGrade( void ) const ;
		void signForm(AForm &form);
		void increm( void );
		void decrem( void );
		void executeForm( AForm const & form );
		Form* makeForm( std::string form_name, std::string form_target );


};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif