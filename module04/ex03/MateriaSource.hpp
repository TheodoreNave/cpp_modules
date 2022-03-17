#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	protected:
		AMateria* materia[4];

	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		~MateriaSource(void);

		MateriaSource &operator=(MateriaSource const &rhs);

		bool checkType(std::string type);
		AMateria* searchMateria(std::string const &type);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

};

#endif
