#include <iostream>
#include <string>
#define NUMBER_OF_LINES 2


struct person{
	std::string name;
	std::string last_name;
	std::string phone_number;
	std::string nickname;
	std::string secret;


};

class Phonebook
{
	public:
		// Phonebook()
		// {
		// 	amount = 0;
		// }

		bool ft_is_unvisable(std::string name)
		{
			
			int i;

			i = 0;
			while(name[i])
			{
				if (std::isprint(name[i]))
					return true;
				i++;
			}
			return false;
		}
		void clean_the_last()
		{
			people[amount].name.clear();
			people[amount].last_name.clear();
			people[amount].phone_number.clear();
			people[amount].nickname.clear();
			people[amount].secret.clear();
		}
		void add_contact()
		{
			if (amount == NUMBER_OF_LINES - 1)
				clean_the_last();
			while (!ft_is_unvisable(people[amount].name))
			{
				std::cout << "name:";
				getline(std::cin, people[amount].name);
			}
						while (!ft_is_unvisable(people[amount].last_name))
			{
				std::cout << "last_name:";
				getline(std::cin, people[amount].last_name);
				// std::cout << std::endl;
			}
						while (!ft_is_unvisable(people[amount].phone_number))
			{
				std::cout << "phone_number:";
				getline(std::cin, people[amount].phone_number);
				// std::cout << std::endl;
			}
						while (!ft_is_unvisable(people[amount].nickname))
			{
				std::cout << "nickname:";
				getline(std::cin, people[amount].nickname);
				// std::cout << std::endl;
			}
						while (!ft_is_unvisable(people[amount].secret))
			{
				std::cout << "secret:";
				getline(std::cin, people[amount].secret);
				// std::cout << std::endl;
			}
			if (amount < NUMBER_OF_LINES - 1)
				amount++;
			else 
				flag_of_over = 1;
		}
		std::string print_10(std::string the_string)
		{
			std::string conerted_str;
			std::string empty_lines;
			if (the_string.length() > 10)
				conerted_str = the_string.substr(0, 9).append(".");
			else
				conerted_str = the_string;
			for(int i = 0; i < 10 - conerted_str.length(); i++)
			{
				empty_lines.append(" ");
			}
			return empty_lines.append(conerted_str);

		}
		void print_all_names()
		{
			// std::cout << amount << std::endl; 
			for (int i = 0; i <= (flag_of_over ? amount : amount - 1); i++)
				{
				std::cout << "|" << print_10(std::to_string(i + 1)) << "|" ;
				std::cout << print_10(people[i].name) << "|" ;
				std::cout << print_10(people[i].last_name) << "|" ;
				std::cout << print_10(people[i].nickname) << "|"<< std::endl;
				}
		}
		void search()
		{
				std::cout << "|-------------------------------------------|" << std::endl;
				std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
				std::cout << "|-------------------------------------------|" << std::endl;
				print_all_names();
				std::cout << "|-------------------------------------------|" << std::endl;
		}
	private:
		person people[NUMBER_OF_LINES];
		static int amount;
		static int flag_of_over;

};

int Phonebook::amount = 0;
int Phonebook::flag_of_over = 0;



int main(int argc, char **argv)
{
	std::string my_command;
	Phonebook *phonebook = new Phonebook;

	if (argc > 1)
		std::cout << "No arguments needed!" << std::endl;
	else
	{
		std::getline(std::cin, my_command);
		while (my_command != "EXIT")
		{
		if (my_command == "ADD")
			phonebook->add_contact();
		else if (my_command == "SEARCH")
			phonebook->search();
		else
			std::cout << "нет такой команды" << std::endl;
		std::getline(std::cin, my_command);
		}

	}
	delete phonebook;
}