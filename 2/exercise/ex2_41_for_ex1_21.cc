#include <iostream>
#include <string>
#include "Sales_data.h"
int main()
{
    Sales_data data1, data2;
    double price = 0, totalCnt = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    totalCnt = totalCnt + price;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    totalCnt = totalCnt + price;
    if (data1.bookNo == data2.bookNo) {
        std::cout << "ISBN:\t" << data1.bookNo << "\n"
            << "Sold:\t" << data1.units_sold + data2.units_sold << "\n"
            << "Price:\t" << totalCnt << std::endl;
        return 0;
    } else {
        std::cerr << "Data must refer to the same ISBN." << std::endl;
        return -1;
    }
}
