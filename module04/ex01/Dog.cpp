#include "Dog.hpp"

// ************************************************************************** //
//                      	  	 Member Functions                 	 	 	  //
// ************************************************************************** //

Dog::Dog(void) {

	this->cerv = new Brain();
	Animal::type = "Dog";

	std::cout << "Constructor Dog Default call" << std::endl;
	return ;
}

Dog::Dog(Dog const &src) {

	this->cerv = new Brain();
	Animal::type = "Dog";

	std::cout << "Constructor Dog copy call" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void) {

	delete this->cerv;
	std::cout << "Destructor Dog Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                      	  	 Member Functions                 	 	 	  //
// ************************************************************************** //

void Dog::printIdeas( void ) const {

	cerv->printId();
 	return ;
}

// ************************************************************************** //
//                      	  	 Assignement operator                 	 	  //
// ************************************************************************** //

Dog &Dog::operator=(Dog const &rhs) {

	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound(void) const{

	std::cout << "WAF WAF..!" << std::endl;
	return ;
}

// ************************************************************************** //
//                      	  	 	Accessor                 	 	 	 	  //
// ************************************************************************** //

void Dog::setIdeas( std::string idea ) {

	this->cerv->setIdeas(idea);
}
