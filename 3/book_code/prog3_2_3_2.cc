#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s("Hello Word!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s) {
        if (ispunct(c)) {
            ++punct_cnt;
        } else {

        }
    }
    cout << punct_cnt << " punctuation characters in " << s << endl;
    return 0;
}
