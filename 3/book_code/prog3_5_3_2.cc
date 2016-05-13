#include <iostream>
#include <iterator>

using std::cout;
using std::endl;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *beg = std::begin(arr);
    int *end = std::end(arr);

    while (beg != end && *beg >= 0) {
        cout << *beg << " ";
        ++beg;
    }
    cout << endl;

    return 0;
}
