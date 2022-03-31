#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:

		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat &operator=(Cat const &rhs);
		void makeSound(void) const;
		void printIdeas( void ) const;
		void setIdeas( std::string idea );

	private:

		Brain *cerv;

};

#endif