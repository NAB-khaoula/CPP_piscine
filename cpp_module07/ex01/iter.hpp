#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename Tab>
void    iter(Tab *tab, int lenght, void (*function)(Tab const &));

#endif