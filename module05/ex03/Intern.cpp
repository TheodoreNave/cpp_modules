#include "Intern.hpp"

Intern::Intern( void ) {

	Intern::fct[0] = &Intern::_presidential;
	Intern::fct[1] = &Intern::_Shrubbery;
	Intern::fct[2] = &Intern::_Robotomy;

	return ;
}

Intern::Intern( Intern const &src ) {

	*this = src;
	return ;
}

Intern &Intern::operator=(Intern const &rhs) {

	(void)rhs;
	return *this;
}


Intern::~Intern( void ) {

	return ;
}

AForm* Intern::_presidential( std::string target )
{
	std::cout << "Intern create Presidential Form" << std::endl;
	return (new PresidentialPardonForm(target));

};
AForm * Intern::_Robotomy( std::string target ) {

	std::cout << "Intern create Presidential Form" << std::endl;
	return (new RobotomyRequestForm(target));
}
AForm * Intern::_Shrubbery( std::string target ) {

	std::cout << "Intern create Presidential Form" << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm( std::string form_name, std::string form_target ) {

	int i = 0;

	const int tab[3] = {

		form_name.compare("presidential pardon"),
		form_name.compare("shrubbesry creation"),
		form_name.compare("robotomy request"),
	};

	while (i < 4)
	{
		if (tab[i] == 0)
			return (this->*fct[i])(form_target);
		i++;
	}
	throw Intern::FormDoesntExist();
	return NULL;
}

const char* Intern::FormDoesntExist::what() const throw() {

	return ("Form doesnt exist");
}

