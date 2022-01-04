#include <iostream>
#include <fstream>
#include <unistd.h>

std::string process_line(std::string my_line, std::string what , std::string to)
{
	int n ;
	int i = 0;
	std::string line;
	while ((n = my_line.substr(i).find(what)) != -1)
	{		
		// i = 0;
		// std::cout << n << "initial " << my_line.substr(i) << std::endl;	
		// usleep(2000);
		// if (n == std::string::npos)
	 	// 	return my_line;

		line = my_line.substr(0, n + i) + to + my_line.substr(n + i + what.length());
		my_line = line;
		i += n + to.length();
	}
	return line;
}


int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Неверное количество аргументов!" << std::endl;
		return 1;
	}
	std::string s1= argv[2];
	std::string s2= argv[3];
	std::string s3;
	std::ifstream fs;
	std::ofstream replacef;
  	fs.open (argv[1], std::ifstream::in);
	if (!fs)
		return 1;
	replacef.open((std::string)argv[1] + ".replace");
	while (fs >> s3)
	{
		replacef << process_line(s3 + "\n", s1, s2);

	}
  	fs.close();
	replacef.close();

  	return 0;
}


// Make a program called replace that takes a filename and two strings, let’s call them
// s1 and s2, which are NOT empty.
// It will open the file, and write its contents to FILENAME.replace, after replacing
// every occurrence of s1 with s2.
// All the member functions of the class std::string are allowed, except replace. Use
// them wisely!
// Of course, you will handle errors as best you can. Do not use the C file manipulation
// functions, because that would be cheating, and cheating’s bad, m’kay?
// You will turn in some test files to show your program works.