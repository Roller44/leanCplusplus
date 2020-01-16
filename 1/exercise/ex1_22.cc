#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
	Sales_item item1, item2;
	std::cout << "Please input books, terminate inputs by using keyword \"Ctrl-d\"." << std::endl;
	while (std::cin >> item1)
	{
		item2 = item2 + item1;
	}
	std::cout << item2 << std::endl;
	return 0;
}