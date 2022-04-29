#include "Dog.hpp"

// ************************************************************************** //
//                      	Constructor / Destructor                 	  	  //
// ************************************************************************** //

Dog::Dog(void) {

	this->cerv = new Brain();
	AAnimal::type = "Dog";

	std::cout << "Constructor Dog Default call" << std::endl;
	return ;
}

Dog::Dog(Dog const &src) {
	
	this->cerv = new Brain();
	AAnimal::type = "Dog";

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
//                      	  	 Assignement Operator             	 	 	  //
// ************************************************************************** //

Dog &Dog::operator=(Dog const &rhs) {

	this->type = rhs.type;
	return (*this);
}

// ************************************************************************** //
//                      	  	 Member Functions                 	 	 	  //
// ************************************************************************** //

void Dog::makeSound(void) const{

	std::cout << "WAF WAF..!" << std::endl;
	return ;
}
