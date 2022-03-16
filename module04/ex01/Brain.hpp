#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Brain {

	public:

		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		void setIdeas( std::string idea );
		void printId( void );

		Brain &operator=(Brain const &rhs);


	protected:

		std::string _ideas[100];

	private:


};

#endif