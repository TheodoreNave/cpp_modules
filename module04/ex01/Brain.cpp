#include "Brain.hpp"

// ************************************************************************** //
//                          Constructor / Destructor                 	 	  //
// ************************************************************************** //

Brain::Brain(void) {

	std::cout << "Constructor Brain Default call" << std::endl;
	return ;
}

Brain::Brain(Brain const &src) {

	std::cout << "Constructor Brain copy call" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void) {

	std::cout << "Destructor Brain Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                      	  	 Member Functions                 	 	 	  //
// ************************************************************************** //

void Brain::printId( void ) const {

	int i;
	i = 0;
	while (i < 5)
	{
		std::cout << this->_ideas[i] << std::endl;
		i++;
	}
}

void Brain::setIdeas( std::string idea ) {

	int i;
	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = idea;
		i++;
	}
}

// ************************************************************************** //
//                          	Assignement Operator                		  //
// ************************************************************************** //

Brain &Brain::operator=(Brain const &rhs) {

	(void)rhs;
	return (*this);
}
