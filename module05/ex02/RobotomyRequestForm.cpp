#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("default_robot", 72, 45) {

	this->setTarget("Robot");
	return ;
}

RobotomyRequestForm::RobotomyRequestForm ( std::string target ) : AForm("RobotomyRequestForm", 145, 137) {

	this->setTarget(target);
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src)  : AForm("default_shrub", 145, 137) {

	return;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException(); // Exception plus pertinente
	else
		setRobot();
	return ;
}

void RobotomyRequestForm::setRobot() {

	std::cout << "FZzzzzzzz." << std::endl;
	int i = 0;
	i = rand() % 2;
	if (i == 0)
		std::cout << target << " has been robotomized " << std::endl;
	else
		std::cout << target << " failed to be robotomized " << std::endl;
	return ;
}
