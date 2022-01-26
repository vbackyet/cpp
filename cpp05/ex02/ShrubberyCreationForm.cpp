# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): Form(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), target(other.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	this->target = other.target;
	return *this;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream fout;

	fout.open(this->target + "_shrubbery");
	if (fout.is_open())
	{
		fout << "ASCII tree" << std::endl;
	}
	fout.close();
}
