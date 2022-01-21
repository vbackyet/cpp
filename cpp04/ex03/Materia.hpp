#pragma once
#include "Character.hpp"
#include <iostream>


class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(AMateria const &other);

		AMateria const &operator=(AMateria const &other);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};