#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
    Sales_data data1, data2, data3;
    double price = 0, totalCnt = 0;
    cin >> data1.bookNo >> data1.units_sold >> price;
    totalCnt = totalCnt + price;
    cin >> data2.bookNo >> data2.units_sold >> price;
    totalCnt = totalCnt + price;
    cin >> data3.bookNo >> data3.units_sold >> price;
    totalCnt = totalCnt + price;
    if (data1.bookNo == data2.bookNo && data3.bookNo == data1.bookNo) {
        cout << "ISBN:\t" << data1.bookNo << "\n"
            << "Sold:\t" << data1.units_sold + data2.units_sold + data3.units_sold << "\n"
            << "Price:\t" << totalCnt << endl;
        return 0;
    } else {
        cerr << "Data must refer to the same ISBN." << endl;
        return -1;
    }
}
