#include <iostream>
#include "Chapter6_prog.h"

using std::cout;
using std::endl;

int main()
{
    int i = 42;
    reset(&i);
    cout << "i = " << i << endl;

    return 0;
}
