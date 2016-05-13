#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5};
    int i = 0;
    int arr[6];
    for (auto c : vec) {
        arr[i] = c;
        ++i;
    }
    for (auto c : arr) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
