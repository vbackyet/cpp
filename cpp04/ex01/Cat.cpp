#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "Конструктор Cat" << std::endl;
	this->type = "Cat";
	this->cat_brains = new Brain();
}

Cat::Cat(std::string type)
{
	this->type = type;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "очень deep копирование\n";
	this->type  = obj.type;
	return *this;
}

Cat::~Cat()
{
	delete this->cat_brains;
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




