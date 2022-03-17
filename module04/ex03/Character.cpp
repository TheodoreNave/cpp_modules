#include "Character.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Character::Character( void ) : _name("no_name"){

	std::cout << "Constructor Character call" << std::endl;
	return ;
}

Character::Character(std::string name) : _name(name) {

	std::cout << "Constructor name Character call" << std::endl;
	return ;
}


Character::Character( Character const &src ) {

	std::cout << "Constructor Character copy call" << std::endl;
	*this = src;
	return ;
}

Character::~Character( void ) {

	// delete this->item[0];
	std::cout << "Destructor Character" << std::endl;
	return ;
}

// ************************************************************************** //
//                          Assignement Operator                      	 	  //
// ************************************************************************** //

Character &Character::operator=( Character const &rhs ) {

	int i;

	i = 0;
	this->_name = rhs._name;
	while (i < 4)
	{
		this->item[i] = rhs.item[i];
		i++;
	}
	return (*this);
}

// ************************************************************************** //
//                               Member Function                          	  //
// ************************************************************************** //


std::string const &Character::getName() const {

	return (this->_name);
}

void Character::equip(AMateria *m) {

	int i;

	i = 0;
	while (i < 4)
	{
		if (!this->item[i])
		{
			this->item[i] = m;
			return ;
		}
		i++;
	}
	std::cout << "Inventory is full" << std::endl;
	return ;
}

void Character::unequip(int idx) {

	int i;

	i = 0;
	if (idx > 3 || idx < 0)
	{
		std::cout << "Item does not exist" << std::endl;
		return ;
	}
	if (this->item[idx])
		delete this->item[idx];
	std::cout << "Unequip item" << std::endl;
	return ;
}


void Character::use(int idx, ICharacter& target) {

	if (idx > 3 || idx < 0)
	{
		std::cout << "Item does not exist" << std::endl;
		return ;
	}
	this->item[idx]->use(target);
	return ;
}
