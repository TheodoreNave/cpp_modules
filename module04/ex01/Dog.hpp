#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	public:

		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog &operator=(Dog const &rhs);
		void makeSound(void) const;
		void setIdeas( std::string idea );
		void printIdeas( void );


	protected:

	private:

		Brain *cerv;
};

#endif