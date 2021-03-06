#include "Bureaucrat.hpp"
#include <iostream>
#include <unistd.h>

int main () {

	Bureaucrat greg("greg", 150);
	Bureaucrat theo("theo", 1);

	std::cout << "--------------Bureaurat Theo increm-----------" << std::endl;
	try
	{
		theo.increm();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << theo << std::endl;


	std::cout << "-------------Bureaurat Tim test---------------" << std::endl;
	try
	{
		Bureaucrat tim = Bureaucrat("tim", 150);
		std::cout << tim << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "-------------Bureaurat Greg decrem------------" << std::endl;
	try
	{
		greg.decrem();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << greg << std::endl;

	std::cout << "--------------Bureaurat Laura increm----------" << std::endl;
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
	std::cout << "-------------Bureaucrat Destructor------------" << std::endl;
}
