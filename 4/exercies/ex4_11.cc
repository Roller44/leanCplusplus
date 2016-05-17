#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 3, b = 2, c = 1 , d = 0;
    if (a > b && b > c && c > d) {
        cout << "可以。" << endl;
    } else {
        cout << "不可以。" << endl;
    }

    return 0;
}
