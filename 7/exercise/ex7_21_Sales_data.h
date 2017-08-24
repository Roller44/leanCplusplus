#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//class Sales_data;
//std::istream& read(std::istream&, Sales_data&);

class Sales_data {
	// friends
	friend Sales_data add(Sales_data& lhs, Sales_data& rhs);
	friend std::ostream& print(std::ostream& os, const Sales_data& item);
	friend std::istream& read(std::istream& is, Sales_data& item);

public:
	// constructors
	Sales_data(const std::string& s): bookNo(s) { }
	Sales_data(const std::string& s, unsigned n, double p): bookNo(s), units_sold(0), revenue(0.0) {}
	//Sales_data(std::istream &);
	Sales_data(std::istream& is)
	{
		read(is, *this);
	}

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

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// declarations
Sales_data add(Sales_data& lhs, Sales_data& rhs);
std::ostream& print(std::ostream& os, const Sales_data& item);
std::istream& read(std::istream& is, Sales_data& item);

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
