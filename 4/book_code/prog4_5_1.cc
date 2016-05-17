#include <iostream>

int main()
{
    int i = 0, j;

    j = ++i;
    std::cout << "j 的值是：" << j << ", " << "i 的值是：" << i << std::endl;
    j = i++;
    std::cout << "j 的值是：" << j << ", " << "i 的值是：" << i << std::endl;

    return 0;
}
