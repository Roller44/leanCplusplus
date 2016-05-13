#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1 = "Hello";
    string s2 = "word!";
    char s3[] = "The";
    char s4[] = "end.";

    if (s1 > s2) {
        cout << "s1 大一点。" << endl;
    } else {
        cout << "s2 大一点。" << endl;
    }

    if (strcmp(s3, s4) > 0) {
        cout << "s3 大一些。" << endl;
    } else {
        cout << "s4 大一些。" << endl;
    }

    return 0;
}
