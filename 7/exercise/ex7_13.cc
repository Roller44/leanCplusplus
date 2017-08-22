#include <iostream>
#include "ex7_12_Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main(int argc, char const* argv[])
{
    Sales_data total(cin);
    if (!total.isbn().empty())
    {
        Sales_data trans(cin);
        while (trans.isbn().empty())
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
