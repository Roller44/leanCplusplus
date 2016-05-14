#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;
using parr_int = int(*)[4];
using psubarr_int = int*;

int main()
{
    int ia[3][4];
    int cnt = 0;

    for (parr_int p = ia; p != std::end(ia); p++) {
        for (psubarr_int q = *p; q != std::end(*p); q++) {
            *q = cnt;
            ++cnt;
        }
    }
    for (parr_int p = ia; p != std::end(ia); p++) {
        for (psubarr_int q = *p; q != std::end(*p); q++) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}
