#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name_of_human)
{
	this->name_of_human = name_of_human;
}

void HumanB::setWeapon(Weapon &weapon_name)
{
	this->name_of_weapon = &weapon_name;
}


void HumanB::attack()
{
	std::cout << this->name_of_human << " attacks with his " << this->name_of_weapon->getType() << std::endl;
}