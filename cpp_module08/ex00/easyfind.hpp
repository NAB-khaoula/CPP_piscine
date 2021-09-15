#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <array>

template <typename T>
void easyfind(T type, int n){
    if (std::find(type.begin(), type.end(), n)!= type.end())
        std::cout << "Element found" << std::endl;
    else
        throw std::exception();
}

#endif