#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>


int main()
{
    try
    {
        Bureaucrat  bur("cat", 130);
        Form        form("lyalyalya", 151);
        std::cout << form << std::endl;
        bur.signForm(form);
        std::cout << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  bur("cat", 130);
        Form        form("lyalyalya", 0);
        bur.signForm(form);
        std::cout << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  bur("cat", 130);
        Form        form("lyalyalya", 120);
        bur.signForm(form);
        std::cout << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  bur("cat", 130);
        Form        form("lyalyalya", 140);
        bur.signForm(form);
        std::cout << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
