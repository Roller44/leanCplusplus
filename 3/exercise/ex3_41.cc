#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5};
    vector<int> vec(std::begin(arr), std::end(arr));

    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
