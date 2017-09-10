#include <vector>
#include <string>
#include <fstream>

void func(char* ifName, char* ofName)
{
	std::ifstream ifile(ifName);
	std::ofstream ofile(ofName, std::ofstream::app);
	std::vector<std::string> vec;
	std::string str = "";

	if(ifile)
	{
		while(getline(ifile, str))
		{
			vec.push_back(str);
		}
	}
	for(int k = 0; k < 5; k++)
	{
		for(int i = 0; i < vec.size(); i++)
		{
			ofile << vec[i] << " ";
		}
	}
}

int main(int argc, char* argv[])
{
	func(argv[1], argv[2]);
	return 0;
}
