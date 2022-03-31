#include "Bureaucrat.hpp"
#include <iostream>
#include <unistd.h>

// Understand correclty the thing with Declaration outside the try catch

int main () {

	Bureaucrat greg;
	Bureaucrat theo;

	try
	{
		theo.increm();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << theo << std::endl;

	try
	{
		Bureaucrat tim = Bureaucrat("tim", 150);
		std::cout << tim << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		greg.decrem();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << greg << std::endl;

	try
	{
		Bureaucrat laura("laura", 150);
		laura.increm();
		std::cout << laura << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}