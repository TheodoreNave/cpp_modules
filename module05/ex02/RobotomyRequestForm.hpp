#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>


class RobotomyRequestForm {


	class GradeTooHighException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	class GradeTooLowException  : public std::exception {

		public:

			virtual const char* what() const throw();
	};

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string name );
		RobotomyRequestForm( RobotomyRequestForm const &src );
		~RobotomyRequestForm( void );

		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);


};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs);

#endif