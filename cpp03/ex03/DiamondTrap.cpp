#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :  FragTrap(name), ScavTrap(name)
{
	std::cout << "Constructor DiamondTrap " + name + " called!" << std::endl;
	// this->name = name;
	// this->Hitpoints = 100;
	// this->EnergyPoints = 50;
	// this->AttackDamage = 20;
}




DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap " + this->getName() + " called!" << std::endl;
}


