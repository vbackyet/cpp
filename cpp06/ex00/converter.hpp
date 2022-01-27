#pragma once 
# include <iostream>
# include <fstream>

class Convertor
{
private:
	std::string value_to_convert;
public:
	Convertor(std::string value);
	~Convertor();
	int toInt() const;
	char toChar() const;
	float toFloat() const;
	double toDouble() const;
	class ImpossibleException: public std::exception
	{
		const char *what() const throw();
	};
	class NonDisplayableException: public std::exception
	{
		const char *what() const throw();
	};
};


std::ostream &operator<<(std::ostream &os, Convertor const &conv);



