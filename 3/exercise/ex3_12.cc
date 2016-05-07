#include <string>
#include <vector>

using std::string;
using std::vector;

int main()
{
    vector<vector<int>> ivec;
   // vector<string> svec = ivec;
   // 错误，不能够拷贝赋值
    vector<string> svec(10, "null");

    return 0;
}
