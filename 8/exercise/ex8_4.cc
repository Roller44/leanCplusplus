#include <vector>
#include <string>
#include <fstream>

void func(char* filename)
{
	std::ifstream ifile(filename);
	std::vector<std::string> vec;
	std::string str = "";

	if(ifile)
	{
		while(getline(ifile, str))
		{
			vec.push_back(str);
		}
	}
}

int main(int argc, char* argv[])
{
	func(argv[1]);
	return 0;
}
