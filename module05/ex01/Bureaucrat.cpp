#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("no_name"), _grade(0) {

	std::cout << "Bureaucrat default Constructor called" << std::endl;
	checkGrade();
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {

	std::cout << "Bureaucrat Constructor called" << std::endl;
	checkGrade();
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) {

	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {

	return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {

	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

std::string Bureaucrat::getName( void ) const {

	return this->_name;
}

int Bureaucrat::getGrade( void ) const {

	return this->_grade;
}

void 	Bureaucrat::checkGrade( void ) const {

	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException ();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException ();
	return ;
}

void Bureaucrat::increm( void ) {

	this->_grade--;
	checkGrade();
	return ;
}

void Bureaucrat::decrem( void ) {

	this->_grade++;
	checkGrade();
	return ;
}

void Bureaucrat::signForm(Form &form) {

	if (form.getFormSigned())
		std::cout << this->getName() << " signed " << form.getFormName() << std::endl;
	else
	{
		std::cout << this->getName() << " couldn’t sign " << form.getFormName() << " because ";
		std::cout << "it's not the correct form." << std::endl;
	}
	return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}
