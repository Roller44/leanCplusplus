#include "Chapter6.h"

void exchange(int *p1, int *p2)
{
    int t = 0;
    int *tmp = &t;
    *tmp = *p1;
    *p1 = *p2;
    *p2 = *tmp;
}
