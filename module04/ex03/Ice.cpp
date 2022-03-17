#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void) {

	AMateria::type = "ice";
	std::cout << "Constructor Ice Default call" << std::endl;
	return ;
}

Ice::Ice(Ice const &src) {

	std::cout << "Constructor Ice copy call" << std::endl;
	*this = src;
	return ;
}


Ice::Ice(std::string const & type) {

	AMateria::type = type;
	std::cout << "Constructor Ice copy with strings call" << std::endl;
	return ;
}

Ice::~Ice(void) {

	std::cout << "Destructor Ice Default call" << std::endl;
	return ;
}

Ice &Ice::operator=(Ice const &rhs) {

	AMateria::type = rhs.type;
	return (*this);
}

Ice *Ice::clone() const {

	Ice *clone = new Ice();
	return (clone);
}
