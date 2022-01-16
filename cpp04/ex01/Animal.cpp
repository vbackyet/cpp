#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Конструктор Animal" << std::endl;
	this->type = "Animal";
}

Animal::Animal(std::string type)
{
	this->type = type;
}

Animal &Animal::operator=(const Animal &obj)
{
	this->type  = obj.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Деструктор Animal" << std::endl;
}


void Animal::makeSound() const
{
	std::cout << "???" << std::endl;
}


std::string Animal::getType() const
{
	return (this->type);
}
