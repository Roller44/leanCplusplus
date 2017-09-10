#include <fstream>
#include <iostream>
#include <string>
#include "ex8_6_Sales_data.h"
 
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::ifstream;

int main(int argc, char* argv[])
{
	Sales_data total;
	ifstream ifile(argv[1]);
	string buff = "";

	if(getline(ifile, buff))
	{
		Sales_data total(buff);

		while(getline(ifile, buff))
		{
			Sales_data trans(buff);

			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No data?" << endl;
	}

	return 0;
}
