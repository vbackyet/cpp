#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout<< Zombie::name <<" BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie( std::string name_of_Zombie)
{
	this->name = name_of_Zombie;
	std::cout<< "zombie created" << std::endl;
}

Zombie::~Zombie( void)
{
	std::cout<< "zombie died" << std::endl;
}
