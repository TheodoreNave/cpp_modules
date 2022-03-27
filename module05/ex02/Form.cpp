#include "Form.hpp"

Form::Form( void ) : _name("default_form"), _form_signed(false), _grade_sign(23), _grade_exec(70) {

	std::cout << "Form with default form called" << std::endl;
	return ;
}

Form::Form( std::string name, int grade_sign, int grade_exec ) : _name(name), _form_signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {

	if (this->_grade_exec < 1 || this->_grade_sign < 1)
		throw Form::GradeTooHighException();
	if (this->_grade_exec > 150 || this->_grade_sign > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form with named assign called" << std::endl;
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

std::string Form::getFormName() const {

	return (this->_name);
}

bool Form::getFormSigned() const {

	return (this->_form_signed);
}

int const Form::getGradeSign() const {

	return (this->_grade_sign);
}


int const Form::getGradeExec() const {

	return (this->_grade_exec);
}

Form &Form::operator=(Form const &rhs) {

	this->_form_signed = rhs.getFormSigned();

	return (*this);
}


void Form::beSigned(Bureaucrat const &office) {

	if (office.getGrade() < getGradeSign())
		this->_form_signed = true;
	else
	{
		throw Form::GradeTooLowException ();
		this->_form_signed = false;
	}
	return ;
}

void Form::signForm(Bureaucrat const &office) {

	if (this->_form_signed == true)
		std::cout << office.getName() << " signed " << this->getFormName() << std::endl;
	else if (this->_form_signed == false)
	{
		std::cout << office.getName() << " couldn’t sign " << this->getFormName() << " because ";
		if (office.getGrade() < getGradeSign())
		{
			std::cout << "Grade too high" << std::endl;
			std::cout << "." << std::endl;
		}
		else if (office.getGrade() > getGradeSign())
		{
			std::cout << "Grade too low" << std::endl;
			std::cout << "." << std::endl;
		}
	}
	return ;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {

	o << rhs.getFormName() << rhs.getGradeSign() << rhs.getGradeExec();
	if (rhs.getFormSigned())
		o << "yes";
	else
		o << "no";
	return o;
}


const char* Form::GradeTooHighException::what() const throw() {

	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}
