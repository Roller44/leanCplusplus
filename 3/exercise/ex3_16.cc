#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "v1 的容量：" << v1.size() << endl;
    cout << "v1 的值：" << "别逗了！" << endl;
    cout << "v2 的容量：" << v2.size() << endl;
    cout << "v2 的值：";
    for (auto i : v2) {
        cout << i << ",";
    }
    cout << endl;
    cout << "v3 的容量：" << v3.size() << endl;
    cout << "v3 的值：";
    for (auto i : v3) {
        cout << i << ",";
    }
    cout << endl;
    cout << "v4 的容量：" << v4.size() << endl;
    cout << "v4 的值：";
    for (auto i : v4) {
        cout << i << ",";
    }
    cout << endl;
    cout << "v5 的容量：" << v5.size() << endl;
    cout << "v5 的值：";
    for (auto i : v5) {
        cout << i << ",";
    }
    cout << endl;
    cout << "v6 的容量：" << v6.size() << endl;
    cout << "v6 的值：";
    for (auto i : v6) {
        cout << i << ",";
    }
    cout << endl;
    cout << "v7 的容量：" << v7.size() << endl;
    cout << "v7 的值：";
    for (auto i : v5) {
        cout << i << ",";
    }
    cout << endl;

    return 0;
}

