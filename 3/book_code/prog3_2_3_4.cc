#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s("some string");
    if (!s.empty()) {
        cout << s << endl;
    }
    if (!s.empty()) {
        s[0] = toupper(s[0]);
    }
    cout << s << endl;
    for (decltype(s.size()) index = 0; s[index] != s.size() && !isspace(s[index]); ++index) {
        s[index] = toupper(s[index]);
    }
    cout << s << endl;
    return 0;
}
