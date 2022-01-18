#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{

	Dog			*dog = new Dog();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;//should not create a leak
	// delete i;

	Animal *somebody = new Dog(*dog);
	// somebody->makeSound();
	delete somebody;
	delete dog;

	Animal *animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Cat;
	for (int i = 5; i < 10; i++)
		animals[i] = new Dog;

	for (int i = 0; i < 10; i++)
		delete animals[i];

	while (1);

}

// Upon construction Dog and Cat will initialize their Brain* with a new Brain();
// Upon destruction Dog and Cat will delete their Brain.
// Your main will create and fill an Array of Animal half of it will be Dog and the other
// half will be Cat.
// Before exit, your main will loop over this array and delete every Animal.
// You must delete directly Cat and Dog as an Animal.
// A copy of a Cat or Dog must be "deep".
// Your test should show that copies are deep!
// Constructors and destructors of each class must have specifics output.
// The appropriate destructors must be called.
