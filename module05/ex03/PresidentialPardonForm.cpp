#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("default_pre", 25, 5) {

	this->setTarget("Robot");
	return ;
}

PresidentialPardonForm::PresidentialPardonForm ( std::string target ) : AForm("PresidentialPardonForm", 25, 5) {

	this->setTarget(target);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src)  : AForm("default_pre", 25, 5) {

	*this = src;
	return;
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (this->getFormSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else
		setPardon();
	return false;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {

	(void)rhs;
	return (*this);

}

void PresidentialPardonForm::setPardon( void ) const {

	std::cout << getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs) {

	o << rhs.getFormName() << " grade to sign : " << rhs.getGradeSign() << ", and need the grade to execute : " << rhs.getGradeExec();
	return o;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	return ;
}