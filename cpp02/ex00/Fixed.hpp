#include <string>
#include <iostream>
#include <unistd.h>
#pragma once




class Fixed
{
	private:
		int fixed_point_value;
		static const int fb = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &obj);
		int getRawBits( void ) const;
		Fixed& operator= (const Fixed &fixed);
		void setRawBits( int const raw );
};

    

// const int Fixed::fb = 8;
// • Private members:
// ◦ An integer to store the fixed point value.
// ◦ A static constant integer to store the number of fractional bits. This constant will always be the litteral 8.
// • Public members:
// ◦ A default constructor that initializes the fixed point value to 0.
// ◦ A destructor.
// ◦ A copy constructor.
// ◦ An assignation operator overload.
// ◦ A member function int getRawBits( void ) const; that returns the raw
// value of the fixed point value.
// ◦ A member function void setRawBits( int const raw ); that sets the raw
// value of the fixed point value.
