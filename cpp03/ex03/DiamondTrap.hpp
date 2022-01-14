
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#pragma once 


class DiamondTrap : public FragTrap , public ScavTrap
{	
	private:
		
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		// void attack(std::string const & target);
		// void guardGate(); 
};