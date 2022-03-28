#include "Dog.hpp"

Dog::Dog(void) {

	this->cerv = new Brain();

	Animal::type = "Dog";

	std::cout << "Constructor Dog Default call" << std::endl;
	return ;
}

Dog::Dog(Dog const &src) {

	std::cout << "Constructor Dog copy call" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void) {

	delete this->cerv;
	std::cout << "Destructor Dog Default call" << std::endl;
	return ;
}

void Dog::printIdeas( void ) const {

	cerv->printId();
 	return ;
}

Dog &Dog::operator=(Dog const &rhs) {

	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound(void) const{

	std::cout << "WAF WAF..!" << std::endl;
	return ;
}

void Dog::setIdeas( std::string idea ) {

	this->cerv->setIdeas(idea);
}
