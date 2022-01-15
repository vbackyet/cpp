#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor FragTrap " + name + " called!" << std::endl;
	this->name = name;
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}



FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap " + this->getName() + " called!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " + this->name + " Hey, high fives?" << std::endl;
}
