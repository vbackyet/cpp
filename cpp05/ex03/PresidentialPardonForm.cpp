#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardon", 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): 
Form(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), target(other.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	this->target = other.target;
	return *this;
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->target + " has been pardoned by Zafod Beeblebrox." << std::endl;
}