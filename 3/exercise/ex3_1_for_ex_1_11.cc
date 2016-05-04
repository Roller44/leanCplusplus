#include <iostream>

using std::cout;
using std::endl;

int main()
{
    std::cout << "Place enter two numbers, I will print all the numbers between them." << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    while (v1 < (v2 - 1))
    {
        ++v1;
        cout << "Numbers between them are:" << v1 << endl;
    }
    return 0;
}
