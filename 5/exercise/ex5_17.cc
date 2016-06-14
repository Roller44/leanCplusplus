#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec1 = {0, 1, 1, 2};
    vector<int> vec2 = {0, 1, 1, 2, 3, 5, 8};

    for (decltype(vec1.size()) i = 0, sz = vec1.size(); i != sz; ++i) {
        if (vec1[i] != vec2[i]) {
            cout << "不是前缀。" << endl;
            break;
        } else {

        }
    }

    return 0;
}
