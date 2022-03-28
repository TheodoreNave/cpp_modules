#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:

		WrongCat(void);
		WrongCat(WrongCat const &src);
		virtual ~WrongCat(void);

		WrongCat &operator=(WrongCat const &rhs);
		void makeSound(void) const;
		std::string const getType(void) const;

	protected:

		std::string type;

};

#endif
