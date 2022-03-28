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

	return;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException(); // Exception plus pertinente
	else
		setPardon();
	return ;
}

void PresidentialPardonForm::setPardon() {

	std::cout << target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}
