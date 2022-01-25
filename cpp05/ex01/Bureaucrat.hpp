#pragma once
#include <iostream>
#include <exception>
#include "Form.hpp"


class Form;
class Bureaucrat
{
public:
	Bureaucrat(std::string const name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	std::string const getName() const;
	Bureaucrat &operator=(Bureaucrat const &obj);
	int 	getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	void	signForm(Form &form);
		class GradeTooHighException: public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char *what() const throw();
	};
private:
	std::string name;
	unsigned int grade;
};



std::ostream &operator<<(std::ostream &os, Bureaucrat &bur);