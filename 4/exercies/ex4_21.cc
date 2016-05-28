#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> intv{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = intv.begin();
    while (iter != intv.end()) {
        *iter = (*iter % 2 == 0) ? *iter : (*iter)*2;
        cout << *iter << endl;
        *iter++;
    }

    return 0;
}
