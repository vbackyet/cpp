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

Fixed& Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}
Fixed& Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->setRawBits(this->getRawBits() + 1);
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->setRawBits(this->getRawBits() - 1);
	return tmp;
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


bool Fixed::operator> (const Fixed &fixed) const
{
	// if(this->fixed_point_value > fixed.fixed_point_value)
	// 	return true;
	// return false;
	return (this->getRawBits() > fixed.getRawBits());

}

bool Fixed::operator< (const Fixed &fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());

}


bool Fixed::operator>= (const Fixed &fixed)
{
	return (this->getRawBits() >= fixed.getRawBits());

}

bool Fixed::operator<= (const Fixed &fixed)
{
	return (this->getRawBits() <= fixed.getRawBits());

}

bool Fixed::operator== (const Fixed &fixed)
{
	return (this->getRawBits() == fixed.getRawBits());

}

bool Fixed::operator!= (const Fixed &fixed)
{
	return (this->getRawBits() != fixed.getRawBits());

}

Fixed Fixed::operator+ (const Fixed &fixed) const
{
	return Fixed((this->getRawBits() +fixed.getRawBits()));
}

Fixed Fixed::operator- (const Fixed &fixed) const
{
	return Fixed((this->getRawBits() - fixed.getRawBits()));

}

Fixed Fixed::operator* (const Fixed &fixed) const
{
	return Fixed(this->toFloat()*fixed.toFloat());
}


Fixed Fixed::operator/ (const Fixed &fixed) const
{
	if (fixed.getRawBits() != 0)
		return Fixed(this->getRawBits()/fixed.getRawBits());
	else 
		std::cout << "Zero division" << std::endl;
	return *this;
}


Fixed	&Fixed::min(Fixed &fix1, Fixed &fix2)
{
	return (fix1 < fix2 ? fix1 : fix2);
}

Fixed const	&Fixed::min(Fixed const &fix1, Fixed const &fix2)
{
	return (fix1 < fix2 ? fix1 : fix2);
}

Fixed	&Fixed::max(Fixed &fix1, Fixed &fix2)
{
	return (fix1 < fix2 ? fix1 : fix2);
}

Fixed const	&Fixed::max(Fixed const &fix1, Fixed const &fix2)
{
	return (fix1 > fix2 ? fix1 : fix2);
}

		// Fixed& operatormax (const Fixed &fixed);
		// Fixed& operatormin (const Fixed &fixed);


// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016