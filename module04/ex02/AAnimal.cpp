#include "AAnimal.hpp"

// ************************************************************************** //
//                     		Constructor / Destructor               	 	 	  //
// ************************************************************************** //

AAnimal::AAnimal(void) {

	std::cout << "Constructor AAnimal Default call" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &src) {

	std::cout << "Constructor AAnimal copy call" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal(void) {

	std::cout << "Destructor AAnimal Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                      	  	 Assignement Operator             	 	 	  //
// ************************************************************************** //

AAnimal &AAnimal::operator=(AAnimal const &rhs) {

	this->type = rhs.type;
	return (*this);
}

// ************************************************************************** //
//                      	  	 Member Functions                 	 	 	  //
// ************************************************************************** //

void AAnimal::makeSound(void) const {

	std::cout << "ZZZzzzzz..!" << std::endl;
	return ;
}

// ************************************************************************** //
//                      	  	 	Accessor                 	 	 	  	  //
// ************************************************************************** //

std::string const AAnimal::getType(void) const {

	return (this->type);
}
