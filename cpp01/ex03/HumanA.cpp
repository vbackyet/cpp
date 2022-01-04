#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name_of_human, Weapon &weapon)
{
	this->name_of_human = name_of_human;
	this->name_of_weapon = &weapon;
}

void HumanA::attack()
{
	std::cout << this->name_of_human << " attacks with his " << this->name_of_weapon->getType() << std::endl;
}