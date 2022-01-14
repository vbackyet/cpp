#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main( void ) {
	FragTrap a("Izolda");
	std::cout << "before attack EnergyPoints: "<<  a.getEnergyPoints() << std::endl;
	a.attack("Vladimir");
	a.highFivesGuys();
	std::cout << "after attack EnergyPoints: "<< a.getEnergyPoints() << std::endl;


	

	return 0;
}