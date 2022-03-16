#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>

class Cure {

	protected:

		std::string type; // Cure

	public:

		Cure(void);
		Cure(std::string const & type);
		Cure(Cure const &src);
		~Cure(void);

		Cure &operator=(Cure const &rhs);

		std::string const & getType() const; //Returns the Materia type

		virtual Cure* clone() const;
		void use(ICharacter& target);



};

#endif