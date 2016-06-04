#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int x[10];
    int *p = x;

    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;
    //数值大小不同是因为 p 是指针，sizeof(*p)
    //只会表示当前指针所指元素的大小，或者下一个元素的大小。
    return 0;
}
