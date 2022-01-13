#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap a("Izolda");
	std::cout << "before attack : "<<  a.getEnergyPoints() << std::endl;
	a.attack("Vladimir");
	std::cout << "after attack : "<< a.getEnergyPoints() << std::endl;
	std::cout << "before attack to hero: "<<  a.getHitpoints() << std::endl;
	a.takeDamage(2);
	std::cout << "after attack to hero: "<<  a.getHitpoints() << std::endl;
	std::cout << "before repair to hero: "<<  a.getHitpoints() << std::endl;
	a.beRepaired(1);
	std::cout << "after repair to hero: "<<  a.getHitpoints() << std::endl;

	

	return 0;
}