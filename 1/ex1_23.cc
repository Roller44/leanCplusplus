#include <iostream>
#include "Sales_item.h"
int main()
{
    int count = 1;
    Sales_item item1, item2, sumitem;
    std::cin >> item1;
    while (std::cin >> item2) {
        if (item1.isbn() == item2.isbn()) {
            sumitem = item1 + item2;
            count++;
        }
    }
    std::cout << sumitem << " has " << count << std::endl;
    return 0;
}
