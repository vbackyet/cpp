#include <string>
#include <iostream>
#include <unistd.h>
#include "ClapTrap.hpp"
#pragma once


// Because we can’t ever have enough Claptraps, now you will make another one.
// The class will be named ScavTrap, and will inherit from ClapTrap, the constructor,
// destructor, and attack have to use different outputs. After all, a Claptrap has to have
// some measure of individuality.
// The ScavTrap class will have its construction and destruction messages. Also, proper
// construction/destruction chaining must be present (When you build a ScavTrap, you
// must start by building a ClapTrap... Destruction is in reverse order), and the tests have
// to show it.
// ScavTrap will use the attributes of Claptrap (You need to change Claptrap accordingly)! And must initialize them to:
// ScavTrap will also have a new specific function: void guardGate(); this function
// will display a message on the standard outputs to anounce that ScavTrap have enterred
// in Gate keeper mode.
// Extend your main function to test everything
class ScavTrap : public ClapTrap
{		
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const &other);
		void attack(std::string const & target);
		void guardGate(); 
};
