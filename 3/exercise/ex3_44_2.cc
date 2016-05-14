#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;
using count = size_t;

int main()
{
    int ia[3][4];

    for (count i = 0; i != 3; i++) {
        for (count j = 0; j != 4; j++) {
            ia[i][j] = (i + 1) * j;
        }
    }

    for (count i = 0; i != 3; i++) {
        for (count j = 0; j != 4; j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
