#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int num = 0;
    vector<int> vec;

    while (cin >> num) {
        vec.push_back(num);
    }

    for (decltype(vec.size()) i = 0; i != (vec.size()/2); i++) {
        cout << vec[i] + vec[vec.size() - i - 1] << endl;
    }

    return 0;
}
