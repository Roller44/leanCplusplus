#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3};
    int arr3[] = {1, 3};
    int *begone = std::begin(arr1);
    int *endone = std::end(arr1);
    int *begtwo = std::begin(arr2);
    int *endtwo = std::end(arr2);
    int *begthree = std::begin(arr3);
    int *endthree = std::end(arr3);

    while (*begone == *begtwo && begone != endone && begtwo != endtwo) {
        cout << "相等" << endl;
        ++begone;
        ++begtwo;
    }
    begone = std::begin(arr1);
    while (*begone == *begthree && begone != endone && begthree != endthree) {
        cout << "相等" << endl;
        ++begone;
        ++begthree;
    }

    return 0;
}
