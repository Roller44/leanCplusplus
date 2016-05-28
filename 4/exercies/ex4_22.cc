#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int v = 0;
    while (cin >> v) {
        cout << ((v > 90) ? "High pass" : (v < 60) ?  "Fail" : (v < 75) ?  "Low pass" : "Pass") << endl;
        if (v > 90) {
            cout << "High pass" << endl;
        } else {
            if (v < 60) {
                cout << "Fail" << endl;
            } else {
                if (v < 75) {
                    cout << "Low pass" << endl;
                } else {
                    cout << "Pass" << endl;
                }
            }
        }
    }

    return 0;
}
