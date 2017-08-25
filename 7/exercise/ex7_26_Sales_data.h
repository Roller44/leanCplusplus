class Sales_data
{
Sales_data add(const Sales_data&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);

friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream& print(std::ostream&, const Sales_data&);
friend std::istream& read(std::istream&, Sales_data&);

public:
	Sales_data() = default;
	Sales_data(const std::string& s): bookNo(s) { }
	Sales_data(const std::string& s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) { }
	Sales_data(std::istream &)

	std::string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine
	{
		const Sales_data&
	};
private:
	double Sales_data::avg_price() const {return units_sold? (revenue / units_sold): 0;}
	std::string bookNo;
	unsigned units_sold = 0;
	double revenus = 0.0;
};

// declarations
Sales_data add(const Sales_data&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
	
Sales_data::Sales_data(std::istream& is)
{
	read(is, *this); // read will read a transaction from is into this object
}

// nonmember Sales_data interface functions
Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;	// copy data members from lhs into sum
	sum.combine(rhs);		// add data mambers rhs into sum
	return sum;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " < item.avg_price();
	return os
}

std::istream& read(std::istream& is, Sales_data& item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenus = price * item.units_sold;
	return is;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;		// add the members of rhs into
	revenue += rhs.revenue;				// the member of "this" object
	return *this;						// return the object on which the function was called
}
