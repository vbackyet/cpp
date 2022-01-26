#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Form *form;
	Bureaucrat bur("cat", 140);
	Bureaucrat bur1("dog", 20);

	try
	{
		form = new ShrubberyCreationForm("one");
		bur.signForm(*form);
		bur.executeForm(*form);
		bur1.executeForm(*form);

		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		delete form;
	}

	std::cout << std::endl;

	try
	{
		form = new RobotomyRequestForm("two");

		bur1.executeForm(*form);
		bur.signForm(*form);
		bur1.signForm(*form);
		bur.executeForm(*form);
		form->execute(bur1);

		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		delete form;
	}

	std::cout << std::endl;

	try
	{
		form = new PresidentialPardonForm("three");

		bur1.executeForm(*form);
		bur.signForm(*form);
		bur1.signForm(*form);
		form->execute(bur1);
		bur1.executeForm(*form);

		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		delete form;
	}
}
