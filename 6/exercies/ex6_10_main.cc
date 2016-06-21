#include <iostream>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int v1 = 0, v2 = 0;
    int *p1 = &v1, *p2 = &v2;

    cout << "请输入两个数：" << endl;
    cin >> v1 >> v2;
    exchange(&v1, &v2);
    cout << "转换结果为：" << v1 << " " << v2 << endl;

    return 0;
}
