#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4];

    for (size_t i = 0; i != 3; i++) {
        for (size_t j = 0; j != 4; j++) {
            ia[i][j] = (i + 1) * j;
        }
    }

    for (size_t i = 0; i != 3; i++) {
        for (size_t j = 0; j != 4; j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
