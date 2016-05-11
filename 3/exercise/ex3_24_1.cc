#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int v = 0;

    while (cin >> v) {
        vec.push_back(v);
    }
    auto beg = vec.begin();
    auto end = vec.end();
    while (beg - end != 1) {
        cout << *beg + *(beg + 1) << " ";
        ++beg;
    }
    cout << endl;

    return 0;
}
