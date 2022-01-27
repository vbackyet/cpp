#include <iostream>


typedef struct s_Data
{
	int number;
	std::string word;

}				Data;


uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t> (ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}


int main()
{
	uintptr_t first_stage;
	Data box;
	Data *box1 = NULL;

	box.number = 12;
	box.word  = "Hello";	
	std::cout << box.number << "  -  " << box.word << " - " << &box << "\n";
	first_stage = serialize(&box);
	box1 = deserialize(first_stage);
	std::cout << box1->number << "  -  " << box1->word << " - " << box1 << "\n";
}
