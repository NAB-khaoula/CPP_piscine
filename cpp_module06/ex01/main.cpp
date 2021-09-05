#include <iostream>

typedef struct  s_data{
	uintptr_t     _int;
	float   _float;
	double	_double;
}               Data;

uintptr_t	serialize(Data *ptr){
	return(reinterpret_cast<uintptr_t>(ptr));
}

int main(){
	Data		ptr;
	ptr._int = 4;
	uintptr_t	raw = serialize(&ptr);
	std::cout << raw << std::endl;
}