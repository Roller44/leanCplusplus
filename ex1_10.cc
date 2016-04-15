#include <iostream>
int main()
{
    int sum = 0, val = 10;
    while (val > 1)
    {
        --val;//将 val 加 1
        std::cout << "Value of val is " << val << std::endl;
    }
    return 0;
}
