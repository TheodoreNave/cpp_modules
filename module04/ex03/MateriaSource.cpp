#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {

	std::cout << "Constructor MateriaSource Default call" << std::endl;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src) {

	std::cout << "Constructor MateriaSource copy call" << std::endl;
	*this = src;
	return ;
}


MateriaSource::MateriaSource(std::string const & type) {

	std::cout << "Constructor MateriaSource copy with strings call" << std::endl;
	return ;
}

MateriaSource::~MateriaSource(void) {

	std::cout << "Destructor MateriaSource Default call" << std::endl;
	return ;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {

	this-> = rhs.;

	return (*this);
}

MateriaSource *MateriaSource::clone() const {

	MateriaSource *clone = new MateriaSource();

	return (clone);
}

void MateriaSource::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at <target> *";
	return ;
}


void MateriaSource::learnMateria(Amateria*) {

	this->type = new Amateria(type);
}

AMateria* MateriaSource::createMateria(std::string const & type) {

	Amateria *tmp = type;

	return tmp;

}
