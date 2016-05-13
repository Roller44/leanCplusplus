#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main()
{
    char str1[] = "Hello";
    char str2[] = "Word";
    char str3[11];

    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
    for (auto i : str3) {
        cout << i;
    }
    cout << endl;

    return 0;
}
