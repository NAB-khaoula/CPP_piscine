 #include "easyfind.hpp"

int main()
{
    std::array<int, 3> arr = {1337, 42, 19};
    for (size_t i = 0; i < arr.size(); i++)
        std::cout << arr[i] << std::endl;
    easyfind(arr, 42);
    std::vector<int> v;
    v.push_back(1337); 
    v.push_back(42); 
    v.push_back(19); 
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << std::endl;
    easyfind(v, 42);
}
