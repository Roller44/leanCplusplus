#include <iostream>
#include <iterator>

using std::cout;
using std::endl;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p1 = std::begin(arr);
    int *p2 = std::end(arr);

    while (p1 != p2 && *p1 != 0) {
        p1 = 0;
        ++p1;
    }
    while (p1 != p2) {
        cout << *p1 << " ";
        ++p1;
    }
    cout << endl;

    return 0;
}
