#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4];
    int cnt = 0;

    for (auto &row : ia) {
        for (auto &col : row) {
            col = cnt;
            ++cnt;
        }
    }
    for (auto &row : ia) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
