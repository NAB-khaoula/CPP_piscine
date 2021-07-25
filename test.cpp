#include <iostream>

class Base
{
public:
	void	print() { std::cout << "Base" << std::endl;}
};

class Derived : public Base
{
	void print() { std::cout << "Derived"<< std::endl;}
};

class Derived2 : public Base
{
	void print() { std::cout << "Derived2"<< std::endl;}
};


int main()
{
	Base *base = new Base();
	Base *derived = new Derived();
	Base *derived2 = new Derived2 ();
	// base->print();
	derived->print();
	derived2->print();
}      