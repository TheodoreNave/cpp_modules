#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("no_name"), _grade(1) {

	checkGrade();
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {

	checkGrade();
	std::cout << "Constructor called" << std::endl;
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

void 	Bureaucrat::checkGrade( void ) {

	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException ();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException ();
	return ;
}

std::string Bureaucrat::getName( void ) const {

	return this->_name;
}

int Bureaucrat::getGrade( void ) const {

	return this->_grade;
}

void Bureaucrat::increm( void ) {

	this->_grade++;
	checkGrade();
	return ;
}

void Bureaucrat::decrem( void ) {

	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException ();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException ();
	return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}
