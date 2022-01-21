#include "Ice.hpp"
#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &other): AMateria(other.getType())
{
}

Ice const &Ice::operator=(Ice const &other)
{
	this->type = other.type;
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}