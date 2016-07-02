#include <iostream>
#include "Chapter6.h"

using std::cout;
using std::endl;

void point_compare(int v, int *p){
    if (v > *p) {
        cout << "整数大" << endl;
    } else {
        if (v < *p) {
            cout << "指针所指值大" << endl;
        } else {
            cout << "一样大" << endl;
        }
    }
}
