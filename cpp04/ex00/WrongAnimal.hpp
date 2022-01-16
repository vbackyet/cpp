#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <iomanip>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal( void );
	virtual ~WrongAnimal( void );
	WrongAnimal( WrongAnimal const &other );

	WrongAnimal	&operator=( WrongAnimal const &other );

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;
};

#endif