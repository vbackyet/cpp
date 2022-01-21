#include "Materia.hpp"

std::string const & AMateria::getType() const 
{
	return (this->type);
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria::~AMateria()
{
}

AMateria const &AMateria::operator=(AMateria const &other)
{
	this->type = other.type;
	return (*this);
}



void AMateria::use(ICharacter &target)
{
	(void)target;
}