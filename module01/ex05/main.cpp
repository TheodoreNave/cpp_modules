#include "Karen.hpp"

int main ()
{
	Karen karen;
	std::cout << "Work" << std::endl;
	karen.complain("DEBUG");
	std::cout << "Not working" << std::endl;
	karen.complain("debug");
	std::cout << "Work" << std::endl;
	karen.complain("INFO");
	std::cout << "Not working" << std::endl;
	karen.complain("iNfo");
	std::cout << "Work" << std::endl;
	karen.complain("WARNING");
	std::cout << "Not working" << std::endl;
	karen.complain("WaRnInG");
	std::cout << "Work" << std::endl;
	karen.complain("ERROR");
	std::cout << "Not working" << std::endl;
	karen.complain("ErROR");

	return (0);
}
