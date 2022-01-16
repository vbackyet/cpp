#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public virtual Animal
{
	private:
		Brain *dog_brains;
	public:
		Dog();
		~Dog();
		Dog(std::string type);
		Dog(Animal const &other);
		Dog& operator= (const Dog &obj);
		virtual void makeSound() const;
};