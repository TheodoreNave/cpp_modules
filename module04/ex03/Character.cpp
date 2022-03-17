#include "Character.hpp"

Character::Character( void ) {

	std::cout << "Constructor Character call" << std::endl;
	return ;
}

Character::Character( Character const &src ) {

	std::cout << "Constructor Character copy call" << std::endl;
	return ;
}

Character::~Character( void ) {

	std::cout << "Destructor Character" << std::endl;
	return ;
}

Character &Character::operator=( Character const &rhs ) {

	this->name = rhs.name;
	// this->item = item;
	return (*this);
}

std::string const &Character::getName() const {

	return (this->name);
}

void Character::equip(AMateria *m) {

	// Malloc or not at specific index
}

void Character::unequip(int idx) {

	// erase at specific index
}


void Character::use(int idx, ICharacter& target) {

	
}
