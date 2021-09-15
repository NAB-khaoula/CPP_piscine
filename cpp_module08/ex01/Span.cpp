#include "Span.hpp"

Span::Span(){
}

Span::Span(unsigned int N): _N(N){
}

Span::Span(const Span& span){
	*this = span;
}

Span::~Span(){}

Span &Span::operator=(const Span& span){
	this->_N = span._N;
	container = span.container;
	return (*this);
}

void    Span::addNumber(int n){
	container.shrink_to_fit();
	if (container.size() < _N)
		container.push_back(n);
	else
		throw std::exception();
}

int		Span::shortestSpan(void){
	if (container.size() > 1)
	{
		std::vector<int>::iterator i;
		int		minimumElement;
		std::sort(container.begin(), container.end());
		i = container.begin();
		minimumElement = *(i + 1) - *i;
		while ((i + 1) != container.end() ){
			if (minimumElement >= (*(i + 1) - *i))
				minimumElement = *(i + 1) - *i;
			i++;
		}
		return (minimumElement);
	}
	else
		throw std::exception();
}

int		Span::longestSpan(void){
	if (container.size() > 1)
		return(*(std::max_element(container.begin(), container.end())) - *(std::min_element(container.begin(), container.end())));
	else
		throw std::exception();

}

void	Span::addNumbers(std::vector<int>::iterator i, std::vector<int>::iterator j){
	while (i != j){
		addNumber(*i);
		i++;
	}
}
