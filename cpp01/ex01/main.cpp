#include "Zombie.hpp"

// Zombie* zombieHorde( int N, std::string name );


    // for (int i = 0; i < num; i++) {
    //     // Заполнение массива и вывод значений его элементов
    //     p_darr[i] = i;
    //     cout << "Value of " << i << " element is " << p_darr[i] << endl;
    // }

int main()
{
	Zombie* first_el;
	first_el = zombieHorde(3, "Izolda");
	for (int i = 0; i < 3; i++)
	{
		first_el[i].announce();
	}
	// randomChump("Glasha");
	delete [] first_el;
	return (0);
}



// Write a function that takes an integer N. When called, it allocates N Zombie objects.
// It must allocate all the N Zombie objects in a single allocation. Then, it should initialize
// each Zombie by giving to each one a name. Last, it should return the pointer to the first
// Zombie. The function is prototyped as follows:
// Zombie* zombieHorde( int N, std::string name );
// Submit a main to test that your function zombieHorde works as intended. You may
// want to do so by calling announce() on each one of the Zombies. Do not forget to delete
// ALL the Zombies when you don’t need them anymore.