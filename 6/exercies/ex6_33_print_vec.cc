#include "Chapter6.h"


int print_vec(int times)
{
    if (times > 1)
    {
        print_vec(times -1);
        return times;
    }
    else
    {
        return 1;
    }
}
