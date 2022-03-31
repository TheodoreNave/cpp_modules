#include "MateriaSource.hpp"
#include "AMateria.hpp"

// ************************************************************************** //
//                               Constructor                             	  //
// ************************************************************************** //

MateriaSource::MateriaSource(void)  {

	std::cout << "Constructor MateriaSource Default call" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		this->materia[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src) {

	std::cout << "Constructor MateriaSource copy call" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		this->materia[i] = NULL;
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void) {

	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->materia[i] != NULL)
			delete this->materia[i];
	}
	std::cout << "Destructor MateriaSource Default call" << std::endl;
	return ;
}

// ************************************************************************** //
//                               Assignement operator                      	  //
// ************************************************************************** //

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {

	int i;

	for (i = 0 ; i < 4 ; i++)
		this->materia[i] = rhs.materia[i];
	return (*this);
}

// ************************************************************************** //
//                               Member functions                             //
// ************************************************************************** //

bool MateriaSource::checkType(std::string type) {

	if (type.compare("ice") == 0)
		return (true);
	else if (type.compare("cure") == 0)
		return (true);
	else if (type.compare("fire") == 0)
		return (true);
	else if (type.compare("wind") == 0)
		return (true);
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
	for (i = 0 ; i < 4 ; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = type;
			return ;
		}
	}
	delete type;
}

AMateria* MateriaSource::createMateria(std::string const & type) {

	int i;

	if (!checkType(type))
		return NULL;
	for (i = 0 ; i < 4 ; i ++)
	{
		if (this->materia[i])
		{
			if (this->materia[i]->getType() == type)
				return (this->materia[i]->clone());
		}
	}
	if (i != 4)
		std::cout << "No materia found" << std::endl;
	return NULL;
}
