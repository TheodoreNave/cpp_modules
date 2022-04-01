#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <ctime>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:

		std::string	const	 _name;
		bool 				_form_signed;
		int const			_grade_sign;
		int const 			_grade_exec;
		std::string 		_target;

		AForm( void );

	public:

		AForm( std::string name, int grade_sign, int grade_exec );
		AForm( AForm const &src );
		~AForm( void );

		AForm &operator=(AForm const &rhs);

		std::string const getName( void ) const ;
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
		std::string getTarget( void ) const;

		virtual bool execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};

		class GradeTooLowException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif