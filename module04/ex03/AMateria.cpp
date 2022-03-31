#include "AMateria.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

AMateria::AMateria(void) {

	std::cout << "Constructor AMateria Default call" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &src) {

	std::cout << "Constructor AMateria copy call" << std::endl;
	*this = src;
	return ;
}

AMateria::~AMateria(void) {

	std::cout << "Destructor AMateria Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Assignement operator                      	  //
// ************************************************************************** //

AMateria &AMateria::operator=(AMateria const &rhs) {

	this->type = rhs.getType();

	return (*this);
}

// ************************************************************************** //
//                               Member functions                             //
// ************************************************************************** //


std::string const &AMateria::getType() const {

	return (this->type);
}

void AMateria::use(ICharacter &target) {

	if (this->type.compare("ice") == 0)
			std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type.compare("cure") == 0)
		std::cout <<  "* heals "<< target.getName() << "’s wounds *" << std::endl;
}
