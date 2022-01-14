#include <string>
#include <iostream>
#include <unistd.h>
#pragma once

// The class will be called ClapTrap, and will have the following private attributes,
// initialized to the specified values:
// • Name (Parameter of constructor)
// • Hitpoints (10)
// • Energy points (10)
// • Attack damage (0)
// You will also give it a few public functions to make it more life-like:
// • void attack(std::string const & target)
// • void takeDamage(unsigned int amount)
// • void beRepaired(unsigned int amount)
// In all of these functions, you have to display something to describe what happens.
// For example, the attack function may display something along the lines of:
// ClapTrap <name> attack <target>, causing <damage> points of damage!
// The constructor and destructor must also display something, so people can see they
// have been called.
// You will provide a main function, with enough tests to demonstrate that your code is
// functional.
// 4




class ClapTrap
{
	protected:
		std::string name; 
		unsigned int Hitpoints;
		unsigned int EnergyPoints;
		unsigned int AttackDamage;
		
	public:
		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap const &other);
		ClapTrap& operator= (const ClapTrap &obj);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		unsigned int getHitpoints() const;
		unsigned int getEnergyPoints() const;
		unsigned int getAttackDamage() const;
		std::string	getName() const;
		void	setHitpoints(unsigned int hitpoints);
		void	setEnergyPoints(unsigned int EnergyPoints);
		void	setAttackDamage(unsigned int attackDamage);
};

    
