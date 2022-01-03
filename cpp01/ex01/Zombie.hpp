#include <string>
#include <iostream>
#include <unistd.h>

#pragma once

class Zombie{
    public:
        void announce(void);
        void give_name(std::string name);
        
        // Zombie( void);
	    // ~Zombie( void );

    private:
        std::string name;    
};

Zombie* zombieHorde( int N, std::string name );
