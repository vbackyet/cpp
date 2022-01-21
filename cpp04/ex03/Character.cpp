#include "Character.hpp"

Character::Character()
{
	this->name = "Noname";
	for (int i = 0; i < 4; i++)
		this->my_range[i] = 0;
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->my_range[i] = 0;
}

Character::Character(Character const &other)
{
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->my_range[i])
			delete this->my_range[i];
}

Character const &Character::operator=(Character const &other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
		this->my_range[i] = other.my_range[i];
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->my_range[i])
			this->my_range[i] = materia;
	}
}


void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4)
		this->my_range[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > -1 && idx < 4 && this->my_range[idx])
		this->my_range[idx]->use(target);
}