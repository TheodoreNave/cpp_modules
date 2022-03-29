#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("default_robot", 25, 5) {

	this->setTarget("Robot");
	return ;
}

PresidentialPardonForm::PresidentialPardonForm ( std::string target ) : AForm("PresidentialPardonForm", 145, 137) {

	this->setTarget(target);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src)  : AForm("default_shrub", 145, 137) {

	*this = src;
	return;
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException(); // Exception plus pertinente
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


PresidentialPardonForm::~PresidentialPardonForm( void ) {
	return ;
}