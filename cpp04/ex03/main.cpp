#include <iostream>
#include "MateriaSource.hpp"
#include "Materia.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
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
