#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

using std::cin;
using std::string;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    string isbn() const
    {
        return bookNo;
    }

    Sales_data& combine(const Sales_data &rhs)
    {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;

        return *this;
    }
};

//std::ostream &print(std::ostream&, const Sales_data&);
//std::istream &read(std::istream&, Sales_data&);
#endif
