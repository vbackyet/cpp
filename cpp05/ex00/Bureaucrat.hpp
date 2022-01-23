#pragma once
#include <iostream>
#include <exception>


class Bureaucrat
{
public:
	Bureaucrat(std::string const name, int grade);
	~Bureaucrat();
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
private:
	std::string const name;
	unsigned int grade;
};



std::ostream &operator<<(std::ostream &os, Bureaucrat &bur);