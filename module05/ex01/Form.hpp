#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:

		std::string const  	_name;
		bool 				_form_signed;
		int const			_grade_sign;
		int const			_grade_exec;

	public:

		Form( void );
		Form( std::string name, int grade_sign, int grade_exec );
		Form( Form const &src );
		~Form( void );

		Form &operator=(Form const &rhs);

		std::string const getName( void ) const ;
		int getGrade( void ) const ;
		void increm( void );
		void decrem( void );
		void beSigned(Bureaucrat const &office);
		std::string const getFormName() const;
		bool getFormSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;

		class GradeTooHighException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};

		class GradeTooLowException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};


};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif