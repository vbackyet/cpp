#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat was created" << std::endl;
}

WrongCat::WrongCat( WrongCat const &other )
{
	this->type = other.getType();
	std::cout << "WrongCat was created" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat was deleted" << std::endl;
}

WrongCat	&WrongCat::operator=( WrongCat const &other )
{
	type = other.getType();
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Meow!" << std::endl;
}