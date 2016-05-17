#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int i;
    double d;

    d = i = 3.5;
    cout << "在 d = i = 3.5 之后：" << endl;
    cout << "d = " << d << ", " <<
        "i = " << i << endl;
    i = d = 3.5;
    cout << "在 i = d = 3.5 之后：" << endl;
    cout << "d = " << d << ", " <<
        "i = " << i << endl;

    return 0;
}
