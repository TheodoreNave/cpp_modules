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

	*this = src;
	return;
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else
		setRobot();
	return false;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {

	(void)rhs;
	return (*this);
}


void RobotomyRequestForm::setRobot() const {

	std::cout << "FZzzzzzzz." << std::endl;
	int i = 0;
	srand (time(NULL));
	i = rand() % 2;
	if (i == 0)
		std::cout << getTarget() << " has been robotomized " << std::endl;
	else
		std::cout << getTarget() << " failed to be robotomized " << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	return ;
}