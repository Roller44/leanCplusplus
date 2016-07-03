#include "Chapter6.h"

using std::begin;
using std::end;

int main()
{
    int i = 0;
    int j[2] = {0, 1};

    //print(&i);
    //print(j);
    print(begin(j), end(j));
    print(j, end(j) - begin(j));

    return 0;
}
