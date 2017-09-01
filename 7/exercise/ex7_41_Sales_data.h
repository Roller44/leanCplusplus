#ifndef EX7_41H
#define EX7_41H

#include <string>
#include <iostream>

class Sales_data
{
public:
	Sales_data(std::string s, int n): shut(s), num(n){ }
	Sales_data(): Sales_data("system", 1){ }
	Sales_data(std::istream& is):Sales_data(){echo(is, *this);}

	void shutout(Sales_data&);
	int getNum(Sales_data&);
	void echo(std::istream&, Sales_data&);
private:
	std::string shut;
	int num;
};

void Sales_data::shutout(Sales_data& s)
{
	std::cout << "Shut out to " << s.shut << " who calles me!"<< std::endl;
}

int Sales_data::getNum(Sales_data& s)
{
	return s.num;
}

void Sales_data::echo(std::istream& is, Sales_data& s)
{
	is >> s.shut;
	std::cout << "Echo: " << s.shut << std::endl;
}
#endif
