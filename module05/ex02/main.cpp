#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	Bureaucrat tim("tim", 11);
	ShrubberyCreationForm shrub("shrub");
	PresidentialPardonForm pre("trump");
	RobotomyRequestForm robot("robot");

	std::cout << "--------------Bureaurat Theo Test Presidential + Robotomy------------------" << std::endl;
	try
	{
		Bureaucrat theo("theo", 1);
		pre.beSigned(theo);
		theo.signForm(pre);
		robot.beSigned(theo);
		theo.signForm(robot);
		pre.execute(theo);
		robot.execute(theo);

	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << pre << std::endl;
	std::cout << robot << std::endl;

	std::cout << "--------------Bureaurat Tim Test Presidential + Shrubbery------------------" << std::endl;
	try
	{
		Bureaucrat tim = Bureaucrat("tim", 70);
		shrub.beSigned(tim);
		tim.signForm(shrub);
		pre.beSigned(tim);
		tim.signForm(pre);
		shrub.execute(tim);
		pre.execute(tim);
	}
	catch (std::exception & e)
	{
		std::cout << tim << std::endl;
		std::cerr << e.what() << std::endl;
	}
	std::cout << pre << std::endl;
	std::cout << shrub << std::endl;

	std::cout << "--------------Bureaurat Laura Test Presidential + Shrubbery------------------" << std::endl;

	Bureaucrat laura("laura", 2);

	try
	{
		pre.beSigned(laura);
		laura.signForm(pre);
		shrub.beSigned(laura);
		laura.signForm(shrub);
		pre.execute(laura);
		shrub.execute(laura);
		robot.execute(laura);
	}
	catch (std::exception & e)
	{
		std::cout << laura << std::endl;
		std::cerr << e.what() << std::endl;
	}
	std::cout << pre << std::endl;
	std::cout << robot << std::endl;
	std::cout << "-----------------------------------Destructor--------------------------------" << std::endl;
}