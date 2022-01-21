#pragma once 
#include "IMateriaSource.hpp" 


class MateriaSource: public IMateriaSource
{
private:
	AMateria *my_range[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(MateriaSource const &other);

	MateriaSource const &operator=(MateriaSource const &other);

	virtual void  learnMateria(AMateria *materia);
	virtual AMateria *createMateria(std::string const &type);
};

