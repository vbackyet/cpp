
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#pragma once 


class DiamondTrap : public FragTrap , public ScavTrap
{	
	private:
		std::string name;
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		void	attack(std::string const & target);
		void	whoAmI(void);
};

