#include "WrongCat.hpp"

WrongCat::WrongCat(void) {

	WrongAnimal::type = "WrongCat";

	std::cout << "Constructor WrongCat Default call" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src) {

	std::cout << "Constructor WrongCat copy call" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(void) {

	std::cout << "Destructor WrongCat Default call" << std::endl;
	return ;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {

	this->type = rhs.type;
	return (*this);
}

void WrongCat::makeSound(void) const {

	std::cout << "MIAOUU..!" << std::endl;
	return ;
}
