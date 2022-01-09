#include "Fixed.hpp"
// #include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_value = 0; 
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(value << this->fb);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(value * (1 << this->fb)));
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point_value = fixed.fixed_point_value;
	return *this;
}


std::ostream& operator<< ( std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

// • An overload to the « operator that inserts a floating point representation of the
// fixed point value into the parameter output stream.


int Fixed::getRawBits( void ) const
{
	return this->fixed_point_value;
}


void Fixed::setRawBits( int const raw )
{
	this->fixed_point_value = raw;
}

float	Fixed::toFloat() const
{
	return ((float) this->getRawBits() / (float) (1 << this->fb));
}

int		Fixed::toInt() const
{
	return (this->getRawBits() >> 8);
}
