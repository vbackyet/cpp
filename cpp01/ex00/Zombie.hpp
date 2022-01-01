#include <string>


class Zombie{
    public:
        void announce(void);
        
        Zombie( int initial_deposit );
	    ~Zombie( void );

    private:
        std::string name;    
}


//First, make aZombieclass. The zombies have a private name and are able to announcethemselves like:
//<name> 
//BraiiiiiiinnnzzzZ...Yes,announce( void )is a member function. Also, add a debugging message in the destructor including the name of theZombie.
//After this, write a function that will create aZombie, name it, and return it to beused somewhere else in your code. 
//The prototype of the function is:Zombie* newZombie( std::string name );
//You will also have to write another function that will create aZombie, and make itannounceitself. 
//The prototype of the function is:void randomChump( std::string name );
//Now the actual point of the exercise: yourZombiesmust be destroyed at the appro-priate time (when they are not needed anymore).
//They must be allocated on the stackor the heap depending on its use: sometimes
//it’s appropriate to have them on the stack,at other times the heap may a better choice.