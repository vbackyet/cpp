#include <iostream>
#include <fstream>
#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc !=2) 
		return 1;
	Karen *k = new Karen;
	k->complain(argv[1]);

	delete k;
	return 1;
}

