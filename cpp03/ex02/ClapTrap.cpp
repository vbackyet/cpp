#include "ClapTrap.hpp"



ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor ClapTrap " + name + " called!" << std::endl;
	this->name = name;
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}


ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap " + this->getName() + " called!" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "Constructor ClapTrap called!" << std::endl;
}


// main functions

void ClapTrap::attack(std::string const &target)
{
	if (this->EnergyPoints < this->getAttackDamage())
		return;
	else
		this->EnergyPoints -= this->getAttackDamage();
	std::cout << "ClapTrap " + this->name + " attacks " + target + ",causing " << this->getAttackDamage() << " point of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hitpoints < amount)
		this->Hitpoints = 0;
	else
		this->Hitpoints -= amount;
	std::cout << "ClapTrap " + this->name + " takes " << amount << " point of damage and now his hitpoints = " << this->Hitpoints << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hitpoints + amount > 10)
		this->Hitpoints = 10;
	else
		this->Hitpoints += amount;
	std::cout << "ClapTrap " + this->name + " was repaired by " << amount << " points and now his hitpoints = " << this->Hitpoints << std::endl;
}


//



ClapTrap& ClapTrap::operator= (const ClapTrap &obj)
{
	this->name = obj.name;
	this->Hitpoints = obj.Hitpoints;
	this->EnergyPoints = obj.EnergyPoints;
	this->AttackDamage = obj.AttackDamage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Copy " + this->getName() + " called" << std::endl;
	*this = obj;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->AttackDamage);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->EnergyPoints);
}

unsigned int ClapTrap::getHitpoints() const
{
	return (this->Hitpoints);
}

std::string	ClapTrap::getName() const
{
	return (this->name);
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->AttackDamage = attackDamage;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->EnergyPoints = energyPoints;
}

void ClapTrap::setHitpoints(unsigned int hitpoints)
{
	this->Hitpoints = hitpoints;
}









