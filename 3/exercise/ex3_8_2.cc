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
        decltype(total.size()) n = 0;
        while (n <= total.size()) {
            total[n] = 'x';
            ++n;
        }
    }

    cout << total << endl;

    return 0;
}
