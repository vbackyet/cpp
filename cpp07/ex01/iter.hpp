#pragma once
#include <iostream>

template <typename T>

T multiply(T a)
{
	return (a*2);
}



template <typename T>

void iter(T *a, int b, T (*function) (T))
{
	for (int i = 0; i < b ; i++)
		std::cout << function(a[i]) << std::endl;
}

