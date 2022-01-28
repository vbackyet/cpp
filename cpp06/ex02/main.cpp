#include <iostream>

class Base
{ 
	public:	
	virtual ~Base() {} 
};

class A : public Base 
{ 
	public: 
		virtual ~A() {}; 
};
class B : public Base 
{ 
	public: 
		virtual ~B() {}; 
};
class C : public Base 
{ 
	public: 
		virtual ~C() {}; 
};

Base *generate() {
	Base* base = NULL;
	srand(time(NULL));
	switch (rand() % 3) {
		case 0:
			base = new A();
			break;
		case 1:
			base = new B();
			break;
		case 2:
			base = new C();
			break;
	}
	return (base);
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Class C" << std::endl;
}

void identify(Base& p) {
	try 
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Class A" << std::endl;
	}
	catch (const std::exception& e) {}
	try 
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Class B" << std::endl;
	}
	catch (const std::exception& e) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Class C" << std::endl;
	}
	catch (const std::exception& e) {}
}

int main() {
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	return 0;
}