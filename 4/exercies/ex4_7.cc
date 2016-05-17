#include <iostream>

using std::cout;
using std::endl;

int main()
{
    short v1 = 32767;

    cout << "溢出是超出范围的意思。" << endl;
    cout << ++v1 << endl;

    return 0;
}
