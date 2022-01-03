#include <iostream>

int main()
{
	std::string string= "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << &string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}


//  Now, display the address in memory of the string.
//  Next, display the address of thestring by using stringPTR and stringREF.
//  Last, display the string using the pointer, and finally display it using the reference.
//  That’s all, no tricks. The goal of this exercise is to make you demystify references. 
//  Itisn’t something completely new, it is just another syntax for something that you alreadyknow: addresses.
//   Even there are some tiny-little-minuscule details.


// #include <iostream>
// using std::cout;
// using std::string;

// int main() {
//     string str = "HI THIS IS BRAIN";
//     string* stringPTR = &str;
//     string& stringREF = str;

//     cout << &str << "\n";       // адрес строки в памяти
//     cout << stringPTR << "\n";  // адрес строки в памяти с помощью stringPTR
//     cout << &stringREF << "\n"; // адрес строки в памяти с помощью stringREF

//     cout << *stringPTR << "\n"; // вывод строки с помощью указателя
//     cout << stringREF << "\n";  // вывод строки с помощью ссылки
// }


// Make a program in which you will create a string containing
// "HI THIS IS BRAIN".Create a stringPTR which is a pointer to the string; 
// and a stringREF which is a reference to the string. Now, display the address in memory of the string.
//  Next, display the address of thestring by using stringPTR and stringREF.
//  Last, display the string using the pointer, and finally display it using the reference.
//  That’s all, no tricks. The goal of this exercise is to make you demystify references. 
//  Itisn’t something completely new, it is just another syntax for something that you alreadyknow: addresses.
//   Even there are some tiny-little-minuscule details.