#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :  FragTrap(name), ScavTrap(name)
{
	std::cout << "Constructor DiamondTrap " + name + " called!" << std::endl;
	this->name = name;
	ClapTrap::name = name +  "_clap_name";
	this->Hitpoints = FragTrap::Hitpoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "my name!" << std::endl;
	std::cout << this->name << std::endl;
	std::cout << "my ClapTrap name!" << std::endl;
	std::cout << ClapTrap::name << std::endl;
}




DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap " + this->getName() + " called!" << std::endl;
}


