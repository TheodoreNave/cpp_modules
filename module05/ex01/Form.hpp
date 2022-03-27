#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:

		const std::string  	_name;
		bool 				_form_signed;
		const int 			_grade_sign;
		const int 			_grade_exec;

	class GradeTooHighException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	class GradeTooLowException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	public:

		Form( void );
		Form( std::string name, int grade_sign, int grade_exec );
		Form( Form const &src );
		~Form( void );

		Form &operator=(Form const &rhs);

		std::string getName( void ) const ;
		int getGrade( void ) const ;
		void increm( void );
		void decrem( void );
		void beSigned(Bureaucrat const &office);
		std::string getFormName() const;
		bool getFormSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;


};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif