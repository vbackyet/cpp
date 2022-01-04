#include <iostream>
#include <fstream>






// We are going to automate Karen, she says always the same things. You have to create
// a class named Karen which will contain the following private member functions:
// • void debug( void );
// • void info( void );
// • void warning( void );
// • void error( void );
// Karen also has to have a public function that calls to the private functions depending
// on the level that is passed as parameter. The prototype of the function is:
// void complain( std::string level );
// The goal of this exercise is to use pointers to member functions. This is not a suggestion, Karen has to complain without using a forest of if/elseif/else, she doesn’t hesitate
// or think twice!
// Submit a main to test that Karen complains a lot. It is okay if you want to use the
// complains we give as example.