#include <iostream>
#include <string>

std::istream& func(std::istream&);

int main()
{
	func(std::cin);

	return 0;
}

std::istream& func(std::istream& is)
{
	std::string word = "";

	while(is >> word)
	{
		std::cout << word << std::endl;
	}

	is.clear();
	
	std:: cout << "end" << std::endl;

	return is;
}
