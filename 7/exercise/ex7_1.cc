#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main(int argc, char const* argv[])
{
    Sales_data total;

    if (cin >> total.bookNo)
    {
        Sales_data trans;

        total.units_sold = 1;
        while (cin >> trans.bookNo)
        {
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold++;
            } else {
                cout << total.bookNo << endl;
                total = trans;
            }
        }
        cout << total.bookNo << endl;
    } else {
        cerr << "No data?" << endl;
        return -1;
    }
    return 0;
}
