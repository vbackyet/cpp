#include "Zombie.hpp"

void Zombie::give_name(std::string name)
{
    this->name = name;
}



Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
        std::cin >> name;
		zombieHorde[i].give_name(name);
	}
	return(zombieHorde);
}