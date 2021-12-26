#include <iostream>


char ft_uppercase(char my_letter)
{
	if (my_letter >= 97 and my_letter <= 122)
		return my_letter-32;
	else
		return my_letter;
}


int main(int argc, char **argv)
{
	int i;
	i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else{
		while(argc - 1 > 0)
		{
			while(*(argv[i])++)
			{
  				std::cout << ft_uppercase(*argv[i]);
				// argv[i]++;
			}
			argc--;
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}