#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {

	public:

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal(void);

		WrongAnimal &operator=(WrongAnimal const &rhs);
		void makeSound(void) const;
		std::string const getType(void) const;

	protected:

		std::string type;

	private:


};

#endif