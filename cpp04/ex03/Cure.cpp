#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &other): AMateria(other.getType())
{
}

Cure const &Cure::operator=(Cure const &other)
{
	this->type = other.type;
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " + target.getName() + " wounds *" << std::endl;
}