#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void) : type("ice") {

	std::cout << "Constructor Ice Default call" << std::endl;
	return ;
}

Ice::Ice(Ice const &src) {

	std::cout << "Constructor Ice copy call" << std::endl;
	*this = src;
	return ;
}


Ice::Ice(std::string const & type) : type(type) {

	std::cout << "Constructor Ice copy with strings call" << std::endl;
	return ;
}

Ice::~Ice(void) {

	std::cout << "Destructor Ice Default call" << std::endl;
	return ;
}

Ice &Ice::operator=(Ice const &rhs) {

	this->type = rhs.type;

	return (*this);
}

Ice *Ice::clone() const {

	Ice *clone = new Ice();

	return (clone);
}

void Ice::use(ICharacter& target) {

	if (target)
		std::cout << "* shoots an ice bolt at " << target << " *";
	else
		std::cout << "No target specified" << std::endl;
	return ;
}
