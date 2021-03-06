#include "Bureaucrat.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	Bureaucrat tim("tim", 5);
	Bureaucrat theo("theo", 5);
	Bureaucrat laura("laura", 55);
	Form paper("paper", 5, 5);
	Form paper2("paper_two", 150, 150);
	Form paper3("paper_three", 40, 45);

	std::cout << "--------------Bureaurat Tim Test------------------" << std::endl;
	try
	{
		Bureaucrat tim("tim", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--------------Bureaurat Theo Test paper-----------" << std::endl;
	try
	{
		theo.signForm(paper);
		paper.beSigned(theo);
		std::cout << theo << std::endl;
		theo.decrem();
		theo.decrem();
		theo.decrem();
		theo.decrem();
		theo.signForm(paper);
		std::cout << theo << std::endl;

	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--------------Bureaurat Tim Test paper2-----------" << std::endl;
	try
	{
		tim.signForm(paper2);
		paper2.beSigned(tim);
	}
	catch (std::exception & e)
	{
		std::cout << tim << std::endl;
		std::cout << paper2 << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------------Bureaurat Laura Test paper3-----------" << std::endl;
	try
	{
		laura.signForm(paper3);
		paper3.beSigned(laura);
	}
	catch (std::exception & e)
	{
		std::cout << laura << std::endl;
		std::cout << paper3 << std::endl;
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------Bureaurat & Form Destructor-----------" << std::endl;
}
