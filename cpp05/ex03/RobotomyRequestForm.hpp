#pragma once
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string target;
protected:
	void	action() const;
public:
	RobotomyRequestForm(std::string target = "No target");
	RobotomyRequestForm(RobotomyRequestForm const &other);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
};