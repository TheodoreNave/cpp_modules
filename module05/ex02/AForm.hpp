#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:

		const std::string  	_name;
		bool 				_form_signed;
		const int 			_grade_sign;
		const int 			_grade_exec;
		const std::string 	_target;
		AForm( void );

	class GradeTooHighException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	class GradeTooLowException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	public:

		AForm( std::string name, int grade_sign, int grade_exec );
		AForm( AForm const &src );
		~AForm( void );

		AForm &operator=(AForm const &rhs);

		std::string getName( void ) const ;
		void set_sign(bool sign);
		int getGrade( void ) const ;
		void increm( void );
		void decrem( void );
		void beSigned(Bureaucrat const &office);
		std::string getFormName() const;
		bool getFormSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;
		void setTarget( std::string target );

		virtual bool execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif