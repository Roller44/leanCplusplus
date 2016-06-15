#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> strs;
    string st;
    bool flag = true;

    while (cin >> st) {
        if (strs.size() != 0) {
            for (auto i = 0; i != strs.size(); ++i) {
                if (strs[i] == st) {
                    cout << "出现相同单词：" << st << endl;
                    flag = false;
                } else {
                    ;
                }
            }
        } else {
        }
        if (!flag) {
            break;
        } else {
            ;
        }
        strs.push_back(st);
    }

    return 0;
}
