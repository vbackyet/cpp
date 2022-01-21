#pragma once


#include "Materia.hpp"


class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice const &other);

	Ice const &operator=(Ice const &other);

	AMateria *clone() const;
	void use(ICharacter &target);
};
