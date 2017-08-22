struct Sales_data
{
	// constuctors added
	Sales_data() = default;
	Sales_data(const std::string& s): bookNo(s) { }
	Sales_data(const std::string& s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p * n) { }
	Sales_data(std::istream &)

	// new members: operations on Sales_data objects
	std::string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine
	{
		const Sales_data&
	};
	double avg_price() const;

	// data members are unchanged from $2.6.1 (p. 72)
	std::string bookNo;
	unsigned units_sold = 0;
	double revenus = 0.0;
};
	
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

double Sales_data::avg_price() const
{
	if (units_sold)
	{
		return revenue / units_sold;
	}
	else
	{
		return 0;
	}
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;		// add the members of rhs into
	revenue += rhs.revenue;				// the member of "this" object
	return *this;						// return the object on which the function was called
}
