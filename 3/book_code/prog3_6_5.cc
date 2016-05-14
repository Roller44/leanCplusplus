#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;

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
    for (auto p = ia; p != std::end(ia); p++) {
        for (auto q = *p; q != std::end(*p); q++) {
            cout << *q << ' ';
        }
        cout << endl;
    }

    return 0;
}
