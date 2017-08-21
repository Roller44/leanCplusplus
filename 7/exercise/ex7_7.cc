#include <iostream>
#include "ex7_6_Sales_data.h"

using std::cout;
using std::endl;
using std::cerr;

int main(int argc, char const* argv[])
{
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while (cin >> trans.bookNo >> total.units_sold >> total.revenue)
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            } else {
				cout << total.isbn() << endl;
                total = trans;
            }
        }
        cout << total.isbn() << endl;
    } else {
        cerr << "No data?!" << endl;
    }
    return 0;
}
