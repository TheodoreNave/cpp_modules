#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {

	protected:

		std::string _name;
		AMateria* item[4];

	public:

		Character(void);
		Character(Character const &src);
		Character(std::string name);
		virtual ~Character(void);

		Character &operator=(Character const &rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif