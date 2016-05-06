#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s("Hello Word!!!");
    for (auto &c : s) {
        c = toupper(c);
    }
    cout << s << endl;
    return 0;
}
