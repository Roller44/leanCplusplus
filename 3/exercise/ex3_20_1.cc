#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int v, i = 0;
    while (cin >> v) {
        vec.push_back(v);
        if (i != 0) {
            cout << vec[i] + vec[i-1] << endl;
        } else {

        }
        i++;
    }

    return 0;
}
