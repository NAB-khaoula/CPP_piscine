#include "Pony.hpp"

Pony::Pony(){
}

Pony::~Pony(){
}

void	ponyOnTheHeap()
{
	Pony    *HeapPony = new Pony();
	std::cout << "im in the heap" << std::endl;
    delete HeapPony;
}

void	ponyOnTheStack()
{
	Pony    HeapPony;
	std::cout << "im in the stack" << std::endl;
}
