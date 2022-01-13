#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	ScavTrap a("Izolda");
	std::cout << "before attack EnergyPoints: "<<  a.getEnergyPoints() << std::endl;
	a.attack("Vladimir");
	a.guardGate();
	std::cout << "after attack EnergyPoints: "<< a.getEnergyPoints() << std::endl;


	

	return 0;
}