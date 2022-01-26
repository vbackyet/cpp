#include "Form.hpp"

Form::Form(std::string name, int grade_req, int grade_exec): name(name), sign(false), grade_to_sign(grade_req), grade_to_execute(grade_exec)
{
    if (this->grade_to_sign > 150 || this->grade_to_execute > 150)
        throw GradeTooLowException();
    if (this->grade_to_sign < 1 || this->grade_to_execute < 1)
        throw GradeTooHighException();
}

Form::~Form()
{
}

Form::Form(Form const &other): name(other.name), sign(false), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{
}

Form &Form::operator=(Form const &other)
{
    this->sign = other.sign;
    return *this;
}

std::string const Form::getName() const
{
    return this->name;
}

int Form::getGradeToSign() const
{
    return this->grade_to_sign;
}

int Form::getGradeToExecute() const
{
    return this->grade_to_execute;
}

bool    Form::getSign()
{
    return this->sign;
}

void    Form::beSigned(Bureaucrat const &bur)
{
    if (this->grade_to_sign < bur.getGrade())
        throw GradeTooLowException();
    this->sign = true;     
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form grade is too low";
}

std::ostream &operator<<(std::ostream &os, Form &form)
{
    os << "Name of Form: " << form.getName() << std::endl 
        << "Grade to sign: " << form.getGradeToSign() << std::endl
        << "Grade to execute: " << form.getGradeToExecute() << std::endl
        << "Status: " << form.getSign();
    return os;
}


void    Form::execute(Bureaucrat const &executor) const
{
    if (!this->sign)
        throw FormIsNotSignedException();
    if (executor.getGrade() > this->grade_to_execute)
        throw GradeTooLowException();
    this->action();
}

const char *Form::FormIsNotSignedException::what() const throw()
{
    return "Form is not signed";
}
