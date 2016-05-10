#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string text;
    while (getline(cin, text)) {
        for (auto it = text.begin(); it != text.end(); it++) {
            *it = toupper(*it);
            cout << *it;
        }
    }
    cout << endl;

    return 0;
}
