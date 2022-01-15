#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap diamond("bebeb");

	diamond.whoAmI();
	diamond.guardGate();
	diamond.attack("Your gates");
}