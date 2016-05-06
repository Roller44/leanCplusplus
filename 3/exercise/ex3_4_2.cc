#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s1, s2;
    cout << "输入两个字符串，我来做比较：" << endl;
    cin >> s1 >> s2;
    if (s1.size() == s2.size()) {
        cout << "它们等长。" << endl;
    } else {
        if (s1.size() > s2.size()) {
            cout << s1 << endl;
        } else {
            cout << s2 << endl;
        }
    }
    return 0;
}
