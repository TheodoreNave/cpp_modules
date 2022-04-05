#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	std::cout << std::endl << "--------------------------Test Intern------------------------------" << std::endl;
	try
	{
		Bureaucrat tim("Tim", 1);
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        rrf->beSigned(tim);
        tim.signForm(*rrf);
        std::cout << *rrf << std::endl;
        tim.executeForm(*rrf);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}