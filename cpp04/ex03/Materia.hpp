#pragma once
#include "Character.hpp"


class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	// тут конструкторы копирования присваивания итд
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};