#include <iostream>
#include <string>

using std::string;

int main()
{
    string s1 = "a string", *p = &s1;
    auto n = s1.size();
    std::cout << n << std::endl;
    n = (*p).size();
    std::cout << n << std::endl;
    n = p->size();
    std::cout << n << std::endl;

    return 0;
}
