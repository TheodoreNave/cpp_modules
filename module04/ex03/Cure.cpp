#include "Cure.hpp"

Cure::Cure(void) : type("Cure") {

	std::cout << "Constructor Cure Default call" << std::endl;
	return ;
}

Cure::Cure(Cure const &src) {

	std::cout << "Constructor Cure copy call" << std::endl;
	*this = src;
	return ;
}


Cure::Cure(std::string const & type) : type(type) {

	std::cout << "Constructor Cure copy with strings call" << std::endl;
	return ;
}

Cure::~Cure(void) {

	std::cout << "Destructor Cure Default call" << std::endl;
	return ;
}

Cure &Cure::operator=(Cure const &rhs) {

	this->type = rhs.type;

	return (*this);
}

Cure *Cure::clone() const {

	Cure *clone = new Cure();

	return (clone);
}

void Cure::use(ICharacter& target) {

	std::cout <<  "* heals <target>’s wounds *";
	return ;
}
