#include "AForm.hpp"

AForm::AForm( void ) : _name("default_form"), _form_signed(false), _grade_sign(23), _grade_exec(70) {

	std::cout << "AForm with default form called" << std::endl;
	return ;
}

AForm::AForm( std::string name, int grade_sign, int grade_exec ) : _name(name), _form_signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {

	if (this->_grade_exec < 1 || this->_grade_sign < 1)
		throw AForm::GradeTooHighException();
	if (this->_grade_exec > 150 || this->_grade_sign > 150)
		throw AForm::GradeTooLowException();
	std::cout << "AForm with named assign called" << std::endl;
	return ;
}


AForm::AForm( AForm const &src ) : _name(src.getFormName()), _form_signed(src.getFormSigned()), _grade_sign(src.getGradeSign()), _grade_exec(src.getGradeExec()) {

	*this = src;
	std::cout << "AForm copy called" << std::endl;
	return ;
}

AForm::~AForm( void ) {

	std::cout << "AForm destructor called" << std::endl;
}

std::string AForm::getFormName() const {

	return (this->_name);
}

std::string AForm::getTarget( void ) const {

	return (this->_target);
}

void AForm::setTarget( std::string target ) {

	this->_target = target;
	return ;
}

bool AForm::getFormSigned() const {

	return (this->_form_signed);
}

int AForm::getGradeSign() const {

	return (this->_grade_sign);
}

int AForm::getGradeExec() const {

	return (this->_grade_exec);
}

AForm &AForm::operator=(AForm const &rhs) {

	this->_form_signed = rhs.getFormSigned();

	return (*this);
}

void AForm::beSigned(Bureaucrat const &office) {

	if (office.getGrade() > getGradeSign())
		throw AForm::GradeTooLowException ();
	else
		this->_form_signed = true;
	return ;
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs) {

	o << rhs.getFormName() << " grade to sign : " << rhs.getGradeSign() << ", and need the grade to execute : " << rhs.getGradeExec();
	return o;
}

const char* AForm::GradeTooHighException::what() const throw() {

	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed");
}
