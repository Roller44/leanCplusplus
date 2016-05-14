#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4];
    int cnt = 0;

    for (auto *p = ia; p != std::end(ia); p++) {
        for (auto *q = *p; q != std::end(*p); q++) {
            *q = cnt;
            ++cnt;
        }
    }
    for (auto *p = ia; p != std::end(ia); p++) {
        for (auto *q = *p; q != std::end(*p); q++) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}
