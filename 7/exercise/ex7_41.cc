#include "ex7_41_Sales_data.h"
#include <string>
#include <iostream>

int main()
{
	Sales_data data1("yao", 0);
	Sales_data data2;
	Sales_data data3(std::cin);

	data1.shutout(data1);
	data2.shutout(data2);

	std::cout << "data1's number: " << data1.getNum(data1) << std::endl;
	std::cout << "data2's number: " << data2.getNum(data2) << std::endl;

	return 0;
}
