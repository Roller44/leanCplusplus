#include <iostream>

using std::cout;
using std::endl;

int test(int val)
{
    int a = val;
    static int b = 0;
    ++b;

    return a + b;
}

int main()
{
    for (int i = 0; i != 10; i++) {
        cout << test(10) << endl;
    }

    return 0;
}
