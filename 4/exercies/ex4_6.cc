#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int v = 0;

    cout << "请输入一个数字：" << endl;
    while (cin >> v) {
        if (v % 2 == 0) {
            cout << "这个数是偶数。" << endl;
        } else {
            cout << "这个数是奇数。" << endl;
        }
    }

    return 0;
}
