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
		Fixed(const int integer);
		~Fixed();
		Fixed(Fixed const &obj);
		int getRawBits( void ) const;
		Fixed& operator= (const Fixed &fixed);
		void setRawBits( int const raw );
		int toInt( void ) const; //that converts the fixed point value to an integer value.
		float toFloat( void ) const; //that converts the fixed point value to a floating point value.
};

    
// Ok, ex00 was a good start, but our class is still pretty useless, being only able to
// represent the fixed point value 0.0. Add the following public constructors and public
// member functions to your class:
// • A constructor that takes a constant integer as a parameter and that converts it to
// the correspondant fixed(8) point value. The fractional bits value is initialized like
// in ex00.
// • A constructor that takes a constant floating point as a parameter and that converts
// it to the correspondant fixed(8) point value. The fractional bits value is initialized
// like in ex00.
// • A member function float toFloat( void ) const; that converts the fixed point
// value to a floating point value.
// • A member function int toInt( void ) const; that converts the fixed point value
// to an integer value.
// You will also add the following function overload to your header (declaration) and
// source (definition) files:
// • An overload to the « operator that inserts a floating point representation of the
// fixed point value into the parameter output stream.
// The code:
// Should output something like:
