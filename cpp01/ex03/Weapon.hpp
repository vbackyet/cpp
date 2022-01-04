#include <string>
#include <iostream>
#include <unistd.h>

#pragma once

// Make a Weapon class, that has a type string, and a getType method that returns a
// const reference to this string. It also has a setType, of course!
class Weapon{
    public:
        std::string getType(void);
		void setType(std::string new_type);
		Weapon(std::string initial_type);
    private:
        std::string type;    
};