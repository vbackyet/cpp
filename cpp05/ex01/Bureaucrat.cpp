#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name)
{
	// this->name = name;
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}
Bureaucrat::~Bureaucrat()
{

}

std::string const Bureaucrat::getName() const
{
	return this->name;
}
int Bureaucrat::getGrade() const
{
	return this->grade;
}
void	Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
        throw GradeTooHighException();
	this->grade--;
}
	
void	 Bureaucrat::decrementGrade()
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur)
{
    os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return os;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	this->name = obj.name;
	this->grade = obj.grade;



	return *this;
}

void    Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() + " cannot sign " + form.getName() + " because " + e.what() << std::endl;
    }
}



Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
}