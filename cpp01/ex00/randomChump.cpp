#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *myZombie = newZombie(name);
	myZombie->announce();
	usleep(10000);
	delete myZombie;
}


