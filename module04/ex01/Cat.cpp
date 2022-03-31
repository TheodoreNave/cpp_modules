#include "Cat.hpp"

// ************************************************************************** //
//                          Constructor / Destructor                 	 	  //
// ************************************************************************** //

Cat::Cat(void) {

	this->cerv = new Brain();

	Animal::type = "Cat";

	std::cout << "Constructor Cat Default call" << std::endl;
	return ;
}

Cat::Cat(Cat const &src) {

	std::cout << "Constructor Cat copy call" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void) {

	delete this->cerv;
	std::cout << "Destructor Cat Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                          Assignement operator 		              	 	  //
// ************************************************************************** //

Cat &Cat::operator=(Cat const &rhs) {

	this->type = rhs.type;
	return (*this);
}

// ************************************************************************** //
//                      	  	 Member Functions                 	 	 	  //
// ************************************************************************** //

void Cat::printIdeas( void ) const {

	cerv->printId();
 	return ;
}

void Cat::makeSound(void) const {

	std::cout << "MIAOUU..!" << std::endl;
	return ;
}

void Cat::setIdeas( std::string idea ) {

	this->cerv->setIdeas(idea);
}
