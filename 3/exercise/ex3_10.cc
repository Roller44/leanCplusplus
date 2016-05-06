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

    while (getline(cin, total)) {
        if (total == "--end") {
            break;
        } else {
            
        }
        for (decltype(total.size()) n = 0; n >= 0 && n < total.size(); ++n) {
            if (!ispunct(total[n])) {
                s += total[n];
            }
        }
    }

    cout << s << endl;

    return 0;
}
