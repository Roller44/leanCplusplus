#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data data1, data2;
    double price = 0, totalCnt = 0;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data1.units_sold * price;
    if (data1.bookNo == data2.bookNo) {
        cout << "ISBN:\t" << data1.bookNo << "\n"
            << "Sold:\t" << data1.units_sold + data2.units_sold << "\n"
            << "Price:\t" << data1.revenue + data2.revenue << endl;
    } else {
        cout << "ISBN:\t" << data1.bookNo << "\n"
            << "Sold:\t" << data1.units_sold << "\n"
            << "Price:\t" << data1.revenue << endl;
        cout << "ISBN:\t" << data2.bookNo << "\n"
            << "Sold:\t" << data2.units_sold << "\n"
            << "Price:\t" << data2.revenue << endl;
    }
    return 0;
}
