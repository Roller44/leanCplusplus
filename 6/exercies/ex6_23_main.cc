#include "Chapter6.h"
#include <iterator>

using std::begin;
using std::end;

int main()
{
    int i = 0;
    int j[2] = {0, 1};

    print(&i);
    print(j);
    print(begin(j), end(j));
   // print(j, begin(j) - end(j));

    return 0;
}
