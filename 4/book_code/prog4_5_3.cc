#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("some string");

    auto beg = s.begin();
    //这条语句是未定义的！
    while (beg != s.end() && !isspace(*beg)) {
        *beg = toupper(*beg++);
    }
    cout << s << endl;

    return 0;
}
