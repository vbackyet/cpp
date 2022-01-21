#pragma once
#include "iostream"
#include "ICharacter.hpp"
#include "Materia.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria *my_range[4];
public:
	Character();
	Character(std::string const name);
	Character(Character const &other);
	~Character();

	Character const &operator=(Character const &other);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};
