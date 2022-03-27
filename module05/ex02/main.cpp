#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	// Bureaucrat greg();

	Bureaucrat theo("theo", 12);
	Form paper("Dwight", 23, 55);

	try
	{
		// Bureaucrat theo = Bureaucrat("theo", 20);
		Form paper("theo", 44444, 115);

	}
	catch (std::exception & e)
	{
		std::cout << paper << std::endl;
		std::cerr << e.what() << std::endl;
	}

	try
	{
		// Bureaucrat tim = Bureaucrat("tim", 1);
		Form paper("tim", 152, 152);
		std::cout << paper << std::endl;

	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat laura("laura", 1);

	try
	{
		laura.decrem();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	// // try
	// {
	// 	tim.increm();
	// }
	// catch (std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
}