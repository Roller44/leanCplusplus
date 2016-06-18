#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int fact(int val);

int main()
{
    int val;

    cout << "请输入一个数：" << endl;
    cin >> val;
    int j = fact(val);
    cout << "这个数的绝对值是：" << j << endl;

    return 0;
}

int fact(int val)
{
    if (val < 0) {
        val = -val;
    } else {
        ;
    }

    return val;
}
