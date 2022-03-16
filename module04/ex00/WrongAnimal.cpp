#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {

	std::cout << "Constructor WrongAnimal Default call" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {

	std::cout << "Constructor WrongAnimal copy call" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "Destructor WrongAnimal Default call" << std::endl;
	return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {

	this->type = rhs.type;
	return (*this);
}


void WrongAnimal::makeSound(void) const {

	std::cout << "ZZZzzzzz..!" << std::endl;
	return ;
}

std::string const WrongAnimal::getType(void) const {

	return (this->type);
}
