#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Конструктор Dog" << std::endl;
	this->type = "Dog";
	this->dog_brains = new Brain();
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
	delete this->dog_brains;
	std::cout << "Деструктор Dog" << std::endl;
}


void Dog::makeSound() const
{
	std::cout << "гав" << std::endl;
}

