#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {

	protected:

		std::string name; // ICharacter
		AMateria* item[4];

	public:

		Character(void);
		Character(Character const &src);
		~Character(void);

		Character &operator=(Character const &rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif