#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s1;
    string s2 = s1;
    string s3 = "hiya";
    string s4(10,'c');//内容是十个 c

    string s8 = string(10,'c');

    cout << s4 << endl;
    cout << s8 << endl;

    return 0;
}
