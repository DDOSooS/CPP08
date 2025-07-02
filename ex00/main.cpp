#include "./includes/easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main ()
{
    // std::vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);

    std::list<int> lis;
    lis.push_back(1);
    lis.push_back(2);
    lis.push_back(3);
    lis.push_back(4);
    lis.push_back(5);
    try
    {
        int result = easyfind(lis, 4);
        std::cout << "Found value: " << result << '\n';
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}