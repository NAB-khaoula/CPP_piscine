#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
	srand(time(0));
	Base *base = NULL;
	
	if ((rand() % 3) == 0){
		base = new A();
	}
	else if ((rand() % 3) == 1){
		base = new B();
	}
	else{
		base = new C();
	}
	return base;
}

void identify(Base* p){
	if (dynamic_cast<A *>(p) != nullptr)
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B *>(p) != nullptr)
	{
		std::cout << "B" << std::endl;
	} 
	else if (dynamic_cast<C *>(p) != nullptr){
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p){
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e) {
    }
	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception& e) {
    }
	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception& e) {
    }
}

int main(){
	Base *base1 = generate();
	(void)base1;
	identify(base1);
	identify(*base1);
}