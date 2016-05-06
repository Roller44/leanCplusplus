#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s, total;
    cout << "Enter words: " << endl;

    while (cin >> s) {
        total += s;
        if (s == "--end") {
            break;
        }
    }
    if (!total.empty()) {
        for (decltype(s.size()) n = 0; n >= 0 && n < total.size(); ++n) {
            total[n] = 'x';
        }
    }

    cout << total << endl;

    return 0;
}
