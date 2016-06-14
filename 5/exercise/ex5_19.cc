#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string stra, strb;

    do {
        cout << "请输入两个字符串：" << endl;
        cin >> stra >> strb;
        if (stra.size() > strb.size()) {
            cout << "第一个字符串比较长。" << endl;
            break;
        } else {
            if (stra.size() < strb.size()) {
                cout << "第二个字符串比较长。" << endl;
                break;
            } else {
                cout << "两个字符串一样长。" << endl;
                break;
            }
        }
    } while (!stra.empty() && !strb.empty());

    return 0;
}
