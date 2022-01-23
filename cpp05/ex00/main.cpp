#include "Bureaucrat.hpp"


#include <iostream>


int main()
{
    try
    {
        Bureaucrat bur2("Fiona", 151);
        std::cout << bur2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

	std::cout << "stage 1" << std::endl;


    try
    {
        Bureaucrat bur("Shrek", 1);
        std::cout << bur << std::endl;
        bur.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    
	std::cout << "stage 2" << std::endl;
	
	
	try
    {
        Bureaucrat bur1("Shrekk", 10);
        std::cout << bur1 << std::endl;
        bur1.decrementGrade();
		std::cout << bur1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}
