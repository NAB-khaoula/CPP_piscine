#include "iter.hpp"

template<typename Tab>
void    iter(Tab *tab, int lenght, void (*function)(Tab const &)){
    int i = 0;
    while(i < lenght){
        function(tab[i]);
        i++;
    }
}

template <typename Type>
void    print(Type const &value){
    std::cout << value << std::endl;
}

int main(){
    int _int[] = {0, 1, 2, 3, 4};
    char _char[5] = {'H', 'E', 'L', 'L', 'O'};
    iter(_int, 5, print);
    iter(_char, 5, print);
    return 0;
}

