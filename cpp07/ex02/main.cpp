#include "Array.hpp"

# include <iostream>



int main()
{
	Array<int> numbers(10);
    int* mirror = new int[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        const int value = rand() % 10;
        numbers[i] = value;
        mirror[i] = value;
    }

	Array<int> tmp = numbers;
	Array<int> test(tmp);

    for (int i = 0; i < 10; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[10] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << "numbers[" << i << "] = " << numbers[i];
		std::cout << " mirror[" << i << "] = " << mirror[i];
		std::cout << " tmp[" << i << "] = " << tmp[i];
    }
    delete [] mirror;

    return 0;
}