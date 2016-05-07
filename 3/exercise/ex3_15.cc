#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    cout << "输入一组字符串，以回车为间隔： " << endl;
    string  v1;
    vector<string> v2;
    while (cin >>v1) {
        v2.push_back(v1);
    }
    return 0;
}
