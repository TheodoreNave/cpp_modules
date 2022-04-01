#include "Intern.hpp"

Intern::Intern( void ) : _name("intern_no_name") {

	return ;
}

Intern::Intern( std::string name ) : _name(name)  {

	std::cout << "Constructor called" << std::endl;
	return ;
}

Intern::Intern( Intern const &src ) {

	*this = src;
	return ;
}

Intern::~Intern( void ) {

	return ;
}

Intern &Intern::operator=(Intern const &rhs) {

	this->_name = rhs.getName();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Intern const &rhs) {

	o << rhs.getName() << ", his intern name";
	return o;
}

std::string Intern::getName( void ) const {

	return this->_name;
}

void Intern::signForm(AForm &form) {

	if (form.getFormSigned())
		std::cout << this->getName() << " signed " << form.getFormName() << std::endl;
	else
	{
		std::cout << this->getName() << " couldn’t sign " << form.getFormName() << " because ";
		std::cout << "Grade too low." << std::endl;
	}
	return ;
}

AForm* Intern::makeForm( std::string form_name, std::string form_target ) {


}

const char* Intern::GradeTooHighException::what() const throw() {

	return ("Grade too high");
}

const char* Intern::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}
