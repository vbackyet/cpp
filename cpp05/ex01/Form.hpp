#pragma once
#include "iostream"
#include "Bureaucrat.hpp"
// Make a Form class. It has a name, a boolean indicating whether it is signed (at
// the beginning, it’s not), a grade required to sign it, and a grade required to execute it.
// The name and grades are constant, and all these attributes are private (not protected).
// The grades are subject to the same constraints as in the Bureaucrat, and exceptions
// will be thrown if any of them are out of bounds, Form::GradeTooHighException and
// Form::GradeTooLowException.
// Same as before, make getters for all attributes, and an overload of the << operator
// to ostream that completely describes the state of the form.
// You will also add a beSigned function that takes a Bureaucrat, and makes the form
// signed if the bureaucrat’s grade is high enough. Always remember, grade 1 is better than
// grade 2. If the grade is too low, throw a Form::GradeTooLowException.
// Also add a signForm function to the Bureaucrat. If the signing is successful, it will
// print something like "<bureaucrat> signs <form>", otherwise it will print something
// like "<bureaucrat> cannot sign <form> because <reason>".
// Add whatever’s needed to test this to your main.


class Bureaucrat;

class Form
{
	private:
		std::string const name;
		bool sign;
		int const grade_to_sign;
		int const grade_to_execute;

	public:	
		// геттеры
		std::string const   getName() const;
		int                 getGradeToSign() const;
		int                 getGradeToExecute() const;
		bool                getSign();

		// исключения
		class GradeTooHighException: public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};

		// ортодоксальный класс
		Form( std::string name = "Form", int grade_req = 150, int grade_exec = 150);
		Form(Form const &other);
		~Form();
		// оператор перегрузки =
		Form &operator=(Form const &other);

		// beSigned function and 
		void    beSigned(Bureaucrat const &bureaucrat);
// You will also add a beSigned function that takes a Bureaucrat, and makes the form
// signed if the bureaucrat’s grade is high enough. Always remember, grade 1 is better than
// grade 2. If the grade is too low, throw a Form::GradeTooLowException.
// Also add a signForm function to the Bureaucrat. If the signing is successful, it will
// print something like "<bureaucrat> signs <form>", otherwise it will print something
// like "<bureaucrat> cannot sign <form> because <reason>".		


};


std::ostream &operator<<(std::ostream &os, Form &form);