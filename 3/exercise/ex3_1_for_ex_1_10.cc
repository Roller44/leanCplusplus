#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int sum = 0, val = 10;
    while (val > 1)
    {
        --val;//将 val 减 1
        cout << "Value of val is " << val << endl;
    }
    return 0;
}
