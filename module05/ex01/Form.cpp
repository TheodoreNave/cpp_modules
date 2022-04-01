#include "Form.hpp"

Form::Form( void ) : _name("default_form"), _form_signed(false), _grade_sign(150), _grade_exec(150) {

	std::cout << "Form with default form called" << std::endl;
	return ;
}

Form::Form( std::string name, int grade_sign, int grade_exec ) : _name(name), _form_signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {

	std::cout << "Form with named assign called" << std::endl;
	if (this->_grade_exec < 1 || this->_grade_sign < 1)
		throw Form::GradeTooHighException();
	if (this->_grade_exec > 150 || this->_grade_sign > 150)
		throw Form::GradeTooLowException();
	return ;
}


Form::Form( Form const &src ) : _name(src.getFormName()), _form_signed(src.getFormSigned()), _grade_sign(src.getGradeSign()), _grade_exec(src.getGradeExec()) {

	*this = src;
	std::cout << "Form copy called" << std::endl;
	return ;
}


Form::~Form( void ) {

	std::cout << "Form destructor called" << std::endl;
}

std::string const Form::getFormName() const {

	return (this->_name);
}

bool Form::getFormSigned() const {

	return (this->_form_signed);
}

int	Form::getGradeSign() const {

	return (this->_grade_sign);
}

int	Form::getGradeExec() const {

	return (this->_grade_exec);
}

Form &Form::operator=(Form const &rhs) {

	this->_form_signed = rhs.getFormSigned();

	return (*this);
}

void Form::beSigned(Bureaucrat const &office) {

	if (office.getGrade() > getGradeSign())
		throw Form::GradeTooLowException ();
	else
		this->_form_signed = true;
	return ;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {

	o << rhs.getFormName() << " grade to sign : " << rhs.getGradeSign() << ", and need the grade to execute : " << rhs.getGradeExec();
	return o;
}

const char* Form::GradeTooHighException::what() const throw() {

	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}
