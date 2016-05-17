#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "添加括号之前的结果：" << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
    cout << "添加括号之后的结果：" << ((12 / 3) * 4 ) + (5 * 15) + ((24 % 4) / 2) << endl;

    return 0;
}
