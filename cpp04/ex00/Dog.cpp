#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Конструктор Dog" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type)
{
	this->type = type;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->type  = obj.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Деструктор Dog" << std::endl;
}


void Dog::makeSound() const
{
	std::cout << "гав" << std::endl;
}

