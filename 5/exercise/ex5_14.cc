#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int Cnt = 0;
    string str;

    while (cin >> str) {
        if (str == "now") {
            ++Cnt;
        } else {
            if (str == ".") {
                break;
            } else {

            }
        }
    }
    cout << "Typed " << Cnt << " time(s)." << endl;

    return 0;
}
