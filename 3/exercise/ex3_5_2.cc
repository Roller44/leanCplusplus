#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "输入字符串，用回车一个字符串的输入，用”--end“结束全部输入：" << endl;
    string total, s;
    while (getline(cin, s)) {
        if (s == "--end") {
            cout << "合并输出：" << total << endl;
            break;
        } else {
            total += (s + " ");
        }
    }
    return 0;
}
