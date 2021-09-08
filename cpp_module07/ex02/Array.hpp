#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename Type>
class Array{
	private:
		Type *_element;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array&);
		~Array();
		Array	&operator=(const Array&);
		Type	&operator[](std::size_t idx);
		int		size() const;
};



#endif