#pragma once
#include "Animal.hpp"

class Dog : public virtual Animal
{
	public:
		Dog();
		~Dog();
		Dog(std::string type);
		Dog(Dog const &other);
		Dog& operator= (const Dog &obj);
		virtual void makeSound() const;
};