#include "iter.hpp"


int main()
{
	float	*arr_2 = new float[10];

	std::cout << "Before: ";
	for (int i = 0; i < 10; i++)
	{
		arr_2[i] = i / (float)2;
		std::cout << arr_2[i] << " ";
	}
	std::cout << std::endl << std::endl;

	::iter(arr_2, 10, &::multiply);
	std::cout << "After:  ";
	for (int i = 0; i < 10; i++)
		std::cout << arr_2[i] << " ";
	std::cout << std::endl;
	delete [] arr_2;

	return (0);
}
