#include <string>
#include <iostream>
#include <unistd.h>

#pragma once

class Zombie{
    public:
        void announce(void);
        
        Zombie( std::string name_of_Zombie);
	    ~Zombie( void );

    private:
        std::string name;    
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );
