#include "Cat.hpp"

Cat::Cat(void) {

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

	std::cout << "Destructor Cat Default call" << std::endl;
	return ;
}

Cat &Cat::operator=(Cat const &rhs) {

	this->type = rhs.type;
	return (*this);
}

void Cat::makeSound(void) const {

	std::cout << "MIAOUU..!" << std::endl;
	return ;
}
