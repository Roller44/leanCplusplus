#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int cnt = 0;
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    for (auto it = v1.cbegin(); it != v1.cend(); it++) {
        ++cnt;
        cout << (*it);
    }
    cout << endl;
    cout << cnt << endl;
    cnt = 0;
    for (auto it = v2.cbegin(); it != v2.cend(); it++) {
        ++cnt;
        cout << (*it);
    }
    cout << endl;
    cout << cnt << endl;
    cnt = 0;
    for (auto it = v3.cbegin(); it != v3.cend(); it++) {
        ++cnt;
        cout << (*it);
    }
    cout << endl;
    cout << cnt << endl;
    cnt = 0;
    for (auto it = v4.cbegin(); it != v4.cend(); it++) {
        ++cnt;
        cout << (*it);
    }
    cout << endl;
    cout << cnt << endl;
    cnt = 0;
    for (auto it = v5.cbegin(); it != v5.cend(); it++) {
        ++cnt;
        cout << (*it);
    }
    cout << endl;
    cout << cnt << endl;
    cnt = 0;
    for (auto it = v6.cbegin(); it != v6.cend(); it++) {
        ++cnt;
        cout << (*it);
    }
    cout << endl;
    cout << cnt << endl;
    cnt = 0;
    for (auto it = v7.cbegin(); it != v7.cend(); it++) {
        ++cnt;
        cout << (*it);
    }
    cout << endl;
    cout << cnt << endl;
    cnt = 0;

    return 0;
}

