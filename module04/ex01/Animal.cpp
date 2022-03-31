#include "Animal.hpp"

// ************************************************************************** //
//                          Constructor / Destructor                 	 	  //
// ************************************************************************** //

Animal::Animal(void) {

	std::cout << "Constructor Animal Default call" << std::endl;
	return ;
}

Animal::Animal(Animal const &src) {

	std::cout << "Constructor Animal copy call" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void) {

	std::cout << "Destructor Animal Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                          Assignement Operator                      	 	  //
// ************************************************************************** //

Animal &Animal::operator=(Animal const &rhs) {

	this->type = rhs.type;
	return (*this);
}

// ************************************************************************** //
//                          	Member Functions	                  	 	  //
// ************************************************************************** //


void Animal::printIdeas( void ) const {

	return ;
}


void Animal::makeSound(void) const {

	std::cout << "ZZZzzzzz..!" << std::endl;
	return ;
}

// ************************************************************************** //
//                          		Accessor            	          	 	  //
// ************************************************************************** //

std::string const Animal::getType(void) const {

	return (this->type);
}

void Animal::setIdeas( std::string idea ) {

	std::cout << idea << std::endl;
	return ;
}
