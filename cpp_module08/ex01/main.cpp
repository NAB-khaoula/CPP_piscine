#include "Span.hpp"

int main()
{
	try{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		srand(time(0));
		Span sp1 = Span(1000);
		for (int i = 0; i < 1000 ; i++)
			sp1.addNumber(rand());
		std::cout << sp1.longestSpan() << std::endl;
		std::cout << sp1.shortestSpan() << std::endl;
		std::vector<int> arr;
		arr.push_back(1);
		arr.push_back(10);
		arr.push_back(12);
		arr.push_back(13);
		arr.push_back(15);
		arr.push_back(16);
		arr.push_back(17);
		arr.push_back(18);
		arr.push_back(19);
		arr.push_back(100);
		Span sp2 = Span(10);
		sp2.addNumbers(arr.begin(), arr.end());
		std::cout << sp2.longestSpan() << std::endl;
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << "fail" << std::endl;
	}
}