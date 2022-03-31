#include "Character.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

Character::Character( void ) : _name("no_name"){

	for (int i = 0 ; i < 4 ; i++)
		this->item[i] = NULL;
	std::cout << "Constructor Character call" << std::endl;
	return ;
}

Character::Character(std::string name) : _name(name) {


	for (int i = 0 ; i < 4 ; i++)
		this->item[i] = NULL;
	std::cout << "Constructor name Character call" << std::endl;
	return ;
}


Character::Character( Character const &src ) {

	std::cout << "Constructor Character copy call" << std::endl;
	*this = src;
	return ;
}

Character::~Character( void ) {

	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->item[i] != NULL)
			delete (this->item[i]);
		this->item[i] = NULL;
	}
	std::cout << "Destructor Character" << std::endl;
	return ;
}

// ************************************************************************** //
//                          Assignement Operator                      	 	  //
// ************************************************************************** //

Character &Character::operator=( Character const &rhs ) {

	this->_name = rhs.getName();
	for (int i = 0 ; i < 4 ; i++)
		this->item[i] = rhs.item[i];
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

	if (m == NULL)
		return ;
	for (i = 0 ; i < 4 ; i++)
	{
		if (!this->item[i])
		{
			this->item[i] = m;
			return ;
		}
	}
	if (i == 4)
	{
		std::cout << "Inventory is full" << std::endl;
		this->tg = 1;
		return ;
	}
	return ;
}

void Character::delete_this(AMateria *tab) {

	delete tab;

}

void Character::unequip(int idx) {

	int i;

	i = 0;
	if (idx < 0 || idx > 3)
	{
		std::cout << "Item does not exist" << std::endl;
		return ;
	}
	if (this->no_item == 0 && this->item[idx])
	{
		this->copy[i] = this->item[idx];
		this->item[idx] = NULL;
		delete_this(this->copy[i]);
		this->copy[i] = NULL;
		std::cout << "Unequip item :" << idx << std::endl;
	}
	else
		std::cout << "Item no exist" << std::endl;
	return ;
}


void Character::use(int idx, ICharacter& target) {

	if (idx < 0 || idx > 3)
	{
		std::cout << "Item does not exist" << std::endl;
		return ;
	}
	if (this->item[idx] && this->tg == 0)
	{
		this->item[idx]->use(target);
		return ;
	}
	else
	{
		std::cout << "Item does not exist" << std::endl;
		this->no_item = 1;
	}
	return ;
}

int Character::tg = 0;
int Character::no_item = 0;