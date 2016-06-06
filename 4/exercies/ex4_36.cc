#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int i = 1;
    double d = 2.3456789123;

    int j = static_cast<int>(d) * i;
    cout << j << endl;

    return 0;
}
