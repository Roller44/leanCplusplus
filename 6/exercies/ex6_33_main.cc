#include <iostream>
#include "Chapter6.h"
#include <vector>

int main(int argc, char const* argv[])
{
    std::vector<int> vec = {0, 1, 2, 3, 4};
    std::cout << vec[print_vec(5)] << std::endl;

    return 0;
}
