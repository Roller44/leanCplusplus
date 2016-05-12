#include <iostream>

using std::cout;
using std::endl;

int main()
{
    constexpr int array_size = 10;
    int ia[array_size];

    for (int ix = 0; ix <= array_size; ix++) {
        ia[ix] = ix;
    }
    for (auto i : ia) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
