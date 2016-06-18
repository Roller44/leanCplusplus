#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int fact(int v1, int v2);

int main()
{
    int v1 = 0, v2 = 0;

    cout << "输入两个数字：" << endl;
    cin >> v1 >> v2;
    int j = fact(v1, v2);
    cout << "两数字相乘结果：" << j << endl;

    return 0;
}

int fact(int v1, int v2)
{
    return v1 * v2;
}
