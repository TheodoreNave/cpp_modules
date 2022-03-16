#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		~MateriaSource(void);

		MateriaSource &operator=(MateriaSource const &rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

};

#endif
