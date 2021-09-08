#include "Array.hpp"

template <typename Type>
Array<Type>::Array(){
	this->_element = new Type;
}

template <typename Type>
Array<Type>::Array(unsigned int n){
	this->_element = new Type[n];
}

template <typename Type>
Array<Type>::Array(const Array& array){
	(*this) = array;
}

template <typename Type>
Array<Type>::~Array(){
	delete [] _element;
}

template <typename Type>
Array<Type> &Array<Type>::operator=(const Array& array){
	int size = array.size();
	int i = -1;
	this->_element = new Type[size];
	while(++i < size)
		this->_element[i] = array._element[i];
	return (*this);
}


template <typename Type>
int	Array<Type>::size() const{
	int i = 1;
	while(_element[i])
		i++;
	return (i);
}

template <typename Type>
Type &Array<Type>::operator[](std::size_t idx){
	if (idx >= 0 && idx <= (size_t)this->size())
		return this->_element[idx];
	else 
		throw std::exception();
}


int main(){
	Array<int>  a(3);
	Array<char>  test(3);
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	Array<int>  b(a);
	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a[2] << std::endl;
	a[0] = 3;
	a[1] = 4;
	a[2] = 5;
	std::cout << b[0] << std::endl;
	std::cout << b[1] << std::endl;
	std::cout << b[2] << std::endl;
	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a[2] << std::endl;
	try {
		std::cout << a[-56] << std::endl;
		std::cout << a[56] << std::endl;
	}
	catch (std::exception &e){
		std::cout << "ERROR!" << std::endl;
	}
}
