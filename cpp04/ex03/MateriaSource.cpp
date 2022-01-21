#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		my_range[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->my_range[i])
			delete this->my_range[i];
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	*this = other;
}

MateriaSource const &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < 4; i++)
		this->my_range[i] = other.my_range[i]->clone();
	return (*this);
}


void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; ++i) {
		if (!this->my_range[i]) 
		{
			this->my_range[i] = materia;
			return ;
		}
	}
}


AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 4; i > 0; --i) {
		if (this->my_range[i] && this->my_range[i]->getType() == type) 
		{			
			return this->my_range[i]->clone();
		}
	}
	return 0;
}
