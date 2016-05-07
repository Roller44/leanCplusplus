#include <string>
#include <vector>

using std::string;
using std::vector;

int main()
{
    vector<vector<int>> ivec;
   // vector<string> svec = ivec;
   // 错误，不能够拷贝 int 型的 vector 对象
    vector<string> svec(10, "null");

    return 0;
}
