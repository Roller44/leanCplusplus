#include <iostream>
#include "Chapter6.h"

void point_exchange(int *p1, int *p2){
    int t = 0;
    int *temp = &t;

    std::cout << "交换之前是：" << *p1 << " 和 " << *p2 << std::endl;
    temp = p1;
    p1 = p2;
    p2 = temp;
    std::cout << "交换之后是：" << *p1 << " 和 " << *p2 << std::endl;
}
