#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("default_shrub", 145, 137) {

	this->set_sign(false);
	this->getFormName("Shrub_name");
	this->setTarget("Shrub_name");
	this->
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src)  : AForm("default_shrub", 145, 137) {

	return;
}

ShrubberyCreationForm::ShrubberyCreationForm ( std::string target ) : AForm("ShrubberyCreationForm", 145, 137) {

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm ( void ) {

	return ;
}