#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include "iostream"



class Cat : public virtual Animal
{
	private:
		Brain *cat_brains;
	public:
		Cat();
		~Cat();
		Cat(std::string type);
		Cat(Cat const &other);
		Cat& operator= (const Cat &obj);
		virtual void makeSound() const;
};