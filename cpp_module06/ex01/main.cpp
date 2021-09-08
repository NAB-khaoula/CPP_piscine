#include <iostream>

typedef struct  s_data{
	std::string _str;
	float   	_float;
	std::string	_str1;
}               Data;

uintptr_t	serialize(Data *ptr){
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int main(){
	Data		ptr;
	Data		*test;
	ptr._float = 42563;
	uintptr_t	raw = serialize(&ptr);
	std::cout << raw << std::endl;
	test = deserialize(raw);
	std::cout << test->_float<< std::endl;
	// std::cout << &test<< std::endl;
	// std::cout << &ptr<< std::endl;
}
