#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int v1 = 0, v2 = 0;

    cout << "请输入两个数，回车分隔开：" << endl;
    cin >> v1 >> v2;
    if (v2 == 0) {
        throw runtime_error("第二个数不能为 0");
    } else {
        ;
    }
    cout << "第一个数除以第二个数的结果是：" << v1 / v2  << endl;

    return 0;
}
