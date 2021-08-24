// #include "Form.hpp"
#include <iostream>
#include <fstream>
int main(){
	srand(time(0));
	int i = rand();
	if (i % 2 == 0)
	{
		std::cout << '\a';
		std::cout << i <<" <target> has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << i << " it’s a failure" << std::endl;
	}
}