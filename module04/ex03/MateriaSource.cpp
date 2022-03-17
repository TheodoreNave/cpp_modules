#include "MateriaSource.hpp"
#include "AMateria.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

MateriaSource::MateriaSource(void)  {

	std::cout << "Constructor MateriaSource Default call" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
	{
		this->materia[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src) {

	std::cout << "Constructor MateriaSource copy call" << std::endl;
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void) {

	// delete [] this->materia;
	std::cout << "Destructor MateriaSource Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Assignement operator                      	  //
// ************************************************************************** //

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {

	int i;

	i = 0;
	while (i < 4)
	{
		this->materia[i] = rhs.materia[i];
		i++;
	}
	return (*this);
}

// ************************************************************************** //
//                               Member functions                             //
// ************************************************************************** //

bool MateriaSource::checkType(std::string type) {

	if (type.compare("ice")) {
		return (true);
	}
	else if (type.compare("cure"))
		return (true);
	// else if (type.compare("fire"))
		// return (true);
	// else if (type.compare("wind"))
		// return (true);
	else
	{
		std::cout << "This type does not exist" << std::endl;
		return (false);
	}
}


void MateriaSource::learnMateria(AMateria* type) {

	int i;

	i = 0;
	if (!checkType(type->getType()))
		return ;
	while (i < 4)
	{
		if (!this->materia[i])
		{
			this->materia[i] = type;
			return ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {

	int i;

	i = 0;
	while (i < 4 && this->materia[i])
	{
		if (this->materia[i]->getType() == type)
		{
			return (this->materia[i]);
		}
		else
			this->materia[i] = NULL;
		i++;
	}
	std::cout << "No materia found" << std::endl;
	return NULL;
}
