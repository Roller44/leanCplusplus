#include <vector>
#include <string>
#include <fstream>

void func(char* filename)
{
	std::ifstream ifile(filename);
	std::string buff;
	std::vector<std::string> vec;
	std::string str1 = "";
	std::string str2 = "";
	std::string str3 = "";

	if(ifile)
	{
		while(getline(ifile, buff))
		{
			vec.push_back(buff);	
		}
	}

	str1 = vec[0];
	str2 = vec[1];
	str3 = vec[2];
}

int main(int argc, char* argv[])
{
	func(argv[1]);
	return 0;
}
