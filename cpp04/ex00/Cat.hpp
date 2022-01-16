#pragma once
#include "Animal.hpp"
#include "iostream"



class Cat : public virtual Animal
{
	public:
		Cat();
		~Cat();
		Cat(std::string type);
		Cat(Animal const &other);
		Cat& operator= (const Cat &obj);
		virtual void makeSound() const;
};