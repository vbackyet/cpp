#pragma once
#include <iostream>
#include <exception>


class Bureaucrat
{
public:
	Bureaucrat(std::string const name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(Bureaucrat const &obj);
	std::string const getName() const;
	int 	getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
		class GradeTooHighException: public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char *what() const throw();
	};
protected:
	std::string name;
	unsigned int grade;
};



std::ostream &operator<<(std::ostream &os, Bureaucrat &bur);