#include "Intern.hpp"

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string name, std::string target)
{
	switch (std::tolower(name[0]))
	{
		case 's':
			std::cout << "Intern creates " + target << std::endl;
			return new ShrubberyCreationForm(target);
		case 'r':
			std::cout << "Intern creates " + target << std::endl;
			return new RobotomyRequestForm(target);
		case 'p':
			std::cout << "Intern creates " + target << std::endl;
			return new PresidentialPardonForm(target);
		default:
			std::cout << "Intern does not create " + target << std::endl;
			return nullptr;
	}
}
