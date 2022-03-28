#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {

	public:

		AAnimal(void);
		AAnimal(std::string name);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal(void);

		AAnimal &operator=(AAnimal const &rhs);
		virtual void makeSound(void) const = 0;
		virtual std::string const getType(void) const;

	protected:

		std::string type;

	private:


};

#endif