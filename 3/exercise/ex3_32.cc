#include <iostream>

using std::cout;
using std::endl;

int main()
{
    constexpr int array_size = 10;
    int ia[array_size];
    int ia2[array_size];

    for (int ix = 0; ix <= array_size; ix++) {
        ia[ix] = ix;
    }
    cout << "ia 数组:" << endl;
    for (auto i : ia) {
        cout << i << " ";
    }
    cout << endl;
    for (int ix = 0; ix <= array_size; ix++) {
        ia2[ix] = ia[ix];
    }
    cout << "ia2 数组:" << endl;
    for (auto i : ia2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
