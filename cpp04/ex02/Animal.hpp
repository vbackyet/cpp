#pragma once
#include "iostream"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(std::string type);
		Animal(Animal const &other);
		Animal& operator= (const Animal &obj);
		virtual void makeSound() const = 0;
		std::string getType() const;
};