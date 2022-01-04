#include <string>
#include <iostream>
#include <unistd.h>
#include "Weapon.hpp"
#pragma once


class HumanB{
    public:
        // std::string getType(void);
		// void setType(std::string new_type);
		void attack();
		void setWeapon(Weapon &weapon_name);
		HumanB(std::string name_of_human);
    private:
        std::string name_of_human;
		Weapon *name_of_weapon;    
};

        // jim.setWeapon(club);
        // jim.attack();
        // club.setType("some other type of club");
        // jim.attack();