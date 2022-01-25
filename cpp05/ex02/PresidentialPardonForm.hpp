#pragma once
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string target;
protected:
	void	action() const;
public:
	PresidentialPardonForm(std::string target = "No target");
	PresidentialPardonForm(PresidentialPardonForm const &other);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
};