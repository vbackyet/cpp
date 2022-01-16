#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout << "Конструктор WrongAnimal" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	this->type  = obj.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Деструктор WrongAnimal" << std::endl;
}


void WrongAnimal::makeSound() const
{
	std::cout << "вронг анимал саунд" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

