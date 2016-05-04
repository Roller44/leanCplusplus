#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int sum = 0, val = 50;
    while (val <= 100)
    {
        sum += val; //将 sum + val 赋予 sum
        ++val;//将 val 加 1
    }
    cout << "Sum of 50 to 100 inclusive is " << sum << endl;
    return 0;
}
