#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int v = 0;
    while (v != 42) {
        cout << v++ << " ";
    }
    cout << endl;

    return 0;
}
