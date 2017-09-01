#ifndef EX7_41.H
#define EX7_41.H

void shutout(std::string s);

class Sales_data
{
public:
	Sales_data(std::string s, int t): shut(s), times(t){ }
	Sales_data(): Sales_data(){shutout("system");
private:
	std::string shut;
	int num;

	void shutout(std::string s);
}

Sales_data::void shutout(std::string s)
{
	std::cout<< "Shut out to " << s << " who calles me!"<< endl;
}
#endif
