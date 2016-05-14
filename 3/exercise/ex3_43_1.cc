#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4];
    int cnt = 0;

    for (int (&row)[4] : ia) {
        for (int &col : row) {
            col = cnt;
            ++cnt;
        }
    }
    for (int (&row)[4] : ia) {
        for (int col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
