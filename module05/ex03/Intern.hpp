#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern {

	private:

		AForm *(Intern::*fct[3])( std::string target );

	public:

		Intern( void );
		Intern( Intern const &src );
		~Intern( void );


		AForm* _presidential(std::string target);
		AForm* _Shrubbery(std::string target);
		AForm* _Robotomy(std::string target);
		Intern &operator=(Intern const &rhs);

		AForm* makeForm( std::string form_name, std::string form_target );

		class FormDoesntExist : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Intern const &rhs);

#endif