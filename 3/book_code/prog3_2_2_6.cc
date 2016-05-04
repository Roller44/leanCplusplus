#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string line;
    while (getline(cin, line)) {
        if (line.size() > 80) {
            cout << line <<endl;
        } else {
            
        }
    }
    return 0;
}
