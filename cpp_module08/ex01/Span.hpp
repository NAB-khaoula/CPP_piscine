#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class   Span{
	private:
		unsigned int _N;
		std::vector<int> container;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span&);
		~Span();
		Span    &operator=(const Span&);
		void    addNumber(int n);
		void    addNumbers(std::vector<int>::iterator i, std::vector<int>::iterator j);
		int     shortestSpan(void);
		int		longestSpan(void);
};

#endif
