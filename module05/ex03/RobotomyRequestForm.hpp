#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"


class RobotomyRequestForm : public AForm {

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string name );
		RobotomyRequestForm( RobotomyRequestForm const &src );
		~RobotomyRequestForm( void );

		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		bool					execute(Bureaucrat const &executor) const;
		void setRobot() const ;

		class GradeTooHighException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};

		class GradeTooLowException  : public std::exception {

			public:

				virtual const char* what() const throw();
		};

};
std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs);

#endif