#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Constructor ScavTrap " + name + " called!" << std::endl;
	this->name = name;
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}




ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap " + this->getName() + " called!" << std::endl;
}


void ScavTrap::attack(std::string const &target)
{
	if (this->EnergyPoints < this->getAttackDamage())
		return;
	else
		this->EnergyPoints -= this->getAttackDamage();
	std::cout << "ScavTrap " + this->name + " attacks " + target + ",causing " << this->getAttackDamage() << " point of damage" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " + this->name + " have enterred in Gate keeper mode" << std::endl;
}