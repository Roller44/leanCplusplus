#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;
using int_array = int[4];

int main()
{
    constexpr size_t rowCnt = 3, conlCnt = 4;
    int ia[rowCnt][conlCnt];
    size_t cnt = 0;

    for (auto &row : ia) {
        for (auto &col : row) {
            col = cnt;
            ++cnt;
        }
    }
    for (int_array *p = ia; p != ia + 3; p++) {
        for (int *q = *p; q != *p + 4; q++) {
            cout << *q << ' ';
        }
        cout << endl;
    }

    return 0;
}
