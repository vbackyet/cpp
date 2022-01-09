#include <string>
#include <iostream>
#include <unistd.h>
#include <cmath>
#pragma once




class Fixed
{
	private:
		int fixed_point_value;
		static const int fb = 8;

		friend std::ostream& operator<< (std::ostream &os, const Fixed &fixed);
	public:
		Fixed();
		Fixed(const int integer);
		Fixed(const float my_float);
		~Fixed();
		Fixed(Fixed const &obj);
		int getRawBits( void ) const;
		Fixed& operator= (const Fixed &fixed);

		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator--(int value);
		Fixed operator++(int value);

		bool operator>(const Fixed & other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other);
		bool operator<=(const Fixed &other);
		bool operator==(const Fixed &other);
		bool operator!=(const Fixed &other);

		Fixed operator+ (const Fixed &fixed) const;
		Fixed operator- (const Fixed &fixed) const;
		Fixed operator* (const Fixed &fixed) const;
		Fixed operator/ (const Fixed &fixed) const;

		static	Fixed	&min(Fixed &fix1, Fixed &fix2);
		static	Fixed	&max(Fixed &fix1, Fixed &fix2);
		static	const Fixed	&min(Fixed const &fix1, Fixed const &fix2);
		static	const Fixed	&max(Fixed const &fix1, Fixed const &fix2);

		void setRawBits( int const raw );
		int toInt( void ) const; //that converts the fixed point value to an integer value.
		float toFloat( void ) const; //that converts the fixed point value to a floating point value.
};


// • Six comparison operators: >, <, >=, <=, == and !=.
// • Four arithmetic operators: +, -, *, and /.
// • The pre-increment, post-increment, pre-decrement and post-decrement operators,
// that will increment or decrement the fixed point value from the smallest representable  such as 1 + E > 1.
// Add the following public static member functions overloads to your class:
// • The static member function min that takes references on two fixed point values and
// returns a reference to the smallest value, and an overload that takes references on
// two constant fixed point values and returns a reference to the smallest constant
// value.
// • The static member function max that takes references on two fixed point values
// and returns a reference to the biggest value, and an overload that takes references
// on two constant fixed point values and returns a reference to the biggest constant
// value.

