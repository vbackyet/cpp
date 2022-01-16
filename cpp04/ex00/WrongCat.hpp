#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <iomanip>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat( void );
	~WrongCat( void );
	WrongCat( WrongCat const &other );

	WrongCat &operator=( WrongCat const &other );

	void	makeSound( void ) const;
};

#endif