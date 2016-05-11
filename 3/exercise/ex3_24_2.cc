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
    end = end - 1;
    while (beg - end != 1) {
        cout << (*beg) + (*end) << " ";
        ++beg;
        --end;
    }
    cout << endl;

    return 0;
}
