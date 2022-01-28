#pragma once
#include <iostream>

template <typename T>

class Array
{
	private:
		unsigned int my_size;
		T *my_array;
	public:
		Array()
		{
			my_size = 0;
			this->my_array = NULL;
		}
		Array(unsigned int n)
		{
			my_size = n;
			this->my_array = new T[n];
		}
		~Array()
		{
			delete [] this->my_array;
		}
		Array(Array const &other)
		{
			*this = other;
		}



		Array &operator=(Array const &other)
		{
			this->my_size = other.my_size;
			if (this->my_size > 0)
			{
				this->my_array = new T[this->my_size];
				for (unsigned int i = 0; i < this->my_size; i++)
					this->my_array[i] = other.my_array[i];
			}
			else
				this->my_array = NULL;
			return *this;
		}
		T &operator[](const unsigned int n)
		{
			if (n < this->my_size)
				return this->my_array[n];
			else
				throw OutOfRangeException();
		}
		class OutOfRangeException: public std::exception
		{
			const char *what() const throw()
			{
				return "Out of range!";
			}
		};
		unsigned int size() const
		{
			return this->my_size;
		}

};
