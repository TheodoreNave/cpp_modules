#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>

class Ice {

	protected:

		std::string type; // ice

	public:

		Ice(void);
		Ice(std::string const & type);
		Ice(Ice const &src);
		~Ice(void);

		Ice &operator=(Ice const &rhs);

		std::string const & getType() const; //Returns the Materia type

		virtual Ice* clone() const;
		void use(ICharacter& target);



};

#endif