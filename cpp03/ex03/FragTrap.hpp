#include "ClapTrap.hpp"

#pragma once


class FragTrap : public virtual ClapTrap
{		
	public:
		FragTrap(std::string name);
		~FragTrap();
		void highFivesGuys(void); 
};
