#include <iostream>
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
    std::cout << "global_str: " << global_str << "\n" << "global_int: " << global_int << "\n" << "local_int: " << local_int << "\n"
        << "local_str: " << local_str << std::endl;
    return 0;
}
