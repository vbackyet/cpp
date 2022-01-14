#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main( void ) {
	DiamondTrap a("Izolda");
	std::cout << "before attack EnergyPoints: "<<  a.getEnergyPoints() << std::endl;
	a.attack("Vladimir");
	a.highFivesGuys();
	std::cout << "after attack EnergyPoints: "<< a.getEnergyPoints() << std::endl;	

	return 0;
}