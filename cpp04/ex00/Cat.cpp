#include "Cat.hpp"


Cat::Cat()
{
	std::cout << "Конструктор Cat" << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string type)
{
	this->type = type;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->type  = obj.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Деструктор Cat" << std::endl;
}


void Cat::makeSound() const
{
	std::cout << "мяу" << std::endl;
}

Cat::Cat(Cat const &other)
{
	*this = other;
	std::cout << "Cat was created" << std::endl;
}




