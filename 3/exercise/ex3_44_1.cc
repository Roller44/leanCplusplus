#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;
using arr = int(&)[4];
using subarr = int&;

int main()
{
    int ia[3][4];
    int cnt = 0;

    for (arr row : ia) {
        for (subarr col : row) {
            col = cnt;
            ++cnt;
        }
    }
    for (arr row: ia) {
        for (int col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
