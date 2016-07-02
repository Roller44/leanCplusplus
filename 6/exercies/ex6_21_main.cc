#include "Chapter6.h"

int main()
{
    int v1 = 44;
    int v2 = 44;
    int *pi = &v2;

    point_compare(v1, pi);

    return 0;
}
