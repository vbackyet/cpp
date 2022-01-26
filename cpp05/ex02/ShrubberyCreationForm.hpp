#pragma once

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string target;
protected:
	void	action() const;
public:
	ShrubberyCreationForm(std::string target = "No target");
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
};
