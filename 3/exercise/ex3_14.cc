#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    cout << "输入一组整数，以回车为间隔： " << endl;
    int v1;
    vector<int> v2;
    while (cin >>v1) {
        v2.push_back(v1);
    }
    return 0;
}
