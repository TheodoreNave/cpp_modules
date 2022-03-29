#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	// Bureaucrat greg();

	Bureaucrat tim("tim", 11);
	// AForm paper2("paper_two", 150, 150);
	// AForm paper3("paper_three", 40, 40);
	ShrubberyCreationForm shrub("theo");
	PresidentialPardonForm pre("tim");
	RobotomyRequestForm robot("laura");


	try
	{
		Bureaucrat theo("theo", 137);
		// AForm paper("paper", 11, 11);
		// paper.beSigned(theo);
		// theo.signForm(paper);
		shrub.execute(theo);
		pre.execute(theo);
		robot.execute(theo);
		// Bureaucrat theo = Bureaucrat("theo", 20);

	}
	catch (std::exception & e)
	{
		// std::cout << theo << std::endl;
		// std::cout << paper << std::endl;
		std::cerr << e.what() << std::endl;
	}

	try
	{
		// Bureaucrat tim = Bureaucrat("tim", 1);
		// tim.signForm(paper2);
		// paper2.beSigned(tim);
	}
	catch (std::exception & e)
	{
		std::cout << tim << std::endl;
		// std::cout << paper2 << std::endl;
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat laura("laura", 55);

	try
	{
		// laura.signForm(paper3);
		// paper3.beSigned(laura);
	}
	catch (std::exception & e)
	{
		std::cout << laura << std::endl;
		// std::cout << paper3 << std::endl;
		std::cerr << e.what() << std::endl;
	}

}