#ifndef PONY_HPP

# define PONY_HPP
# include <iostream>
# include <string>

class Pony
{
private:
	std::string  name;
public:
	Pony();
	~Pony();
};

Pony::Pony()
{
}

Pony::~Pony()
{
}



void	ponyOnTheStack();
void	ponyOnTheHeap();

#endif