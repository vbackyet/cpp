#include <string>
#include <iostream>
#include <unistd.h>
#include "Weapon.hpp"
#pragma once


class HumanA{
    public:
        // std::string getType(void);
		// void setType(std::string new_type);
		void attack();
		HumanA(std::string name_of_human, Weapon &weapon);
    private:
        std::string name_of_human;
		Weapon *name_of_weapon;    
};




// Now, create two classes, HumanA and HumanB, that both have a Weapon, a name, and
// an attack() function that displays:
// NAME attacks with his WEAPON_TYPE
// HumanA and HumanB are almost-almost the same; there are only two tiny-little-minuscule
// details:
// • While HumanA takes the Weapon in its constructor, HumanB doesn’t.
// • HumanB may not always have a Weapon, but HumanA will ALWAYS be armed.