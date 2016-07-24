#include "Chapter6.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cerr;
using std::endl;
using std::vector;

//#define NDEBUG;

void print_vec(vector<int> vec, int times)
{

    #ifndef NDEBUG
    cerr << vec.size() << endl;
    #endif

    if (times > 0)
    {
        cout << vec[times] << endl;
        print_vec(vec, times - 1);
    } else {
        ;
    }
}
