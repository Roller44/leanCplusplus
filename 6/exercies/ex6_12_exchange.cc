#include "Chapter6.h"

void exchange(int &q1, int &q2)
{
    int t = 0;
    t = q1;
    q1 = q2;
    q2 = t;
}
