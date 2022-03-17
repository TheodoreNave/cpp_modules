#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria {

	protected:

		std::string type;

	public:

		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		~AMateria(void);

		AMateria &operator=(AMateria const &rhs);


		std::string const & getType() const; //Returns the Materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);


};

#endif