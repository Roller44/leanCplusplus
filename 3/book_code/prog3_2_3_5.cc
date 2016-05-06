#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const string hexdigits = "0123456789ABCDEF";//可能的十六进制数字
    cout << "Enter a series of numbers between 0 and 15 "
        << "separated by spaces. Hit ENTER when finished:"
        << endl;
    string result;
    string::size_type n;
    while (cin >> n) {
        if (n < hexdigits.size()) {
            result += hexdigits[n];
        }
    }
    cout << "You hex number is: " << result << endl;
    return 0;
}
