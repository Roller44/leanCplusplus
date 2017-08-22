#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data;
std::istream& read(std::istream&, Sales_data&);

struct Sales_data {
	// constructors
	Sales_data(const std::string& s): bookNo(s) { }
	Sales_data(const std::string& s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) {}
	//Sales_data(std::istream &);
	Sales_data(std::istream& is)
	{
		read(is, *this);
	}

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

Sales_data add(Sales_data& lhs, Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
	os << item.bookNo << " " << item.revenue << item.units_sold;
	return os;
}

std::istream& read(std::istream& is, Sales_data& item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
#endif
