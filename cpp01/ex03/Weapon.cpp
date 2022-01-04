#include "Weapon.hpp"


std::string Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

Weapon::Weapon(std::string initial_type)
{
	this->type = initial_type;
}