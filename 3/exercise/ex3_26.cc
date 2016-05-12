#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<unsigned> scores;
    unsigned grade;

    while (cin >> grade) {
        scores.push_back(grade);
    }

    auto beg = scores.begin();
    auto end = scores.end();

    while (beg != end) {
        *beg = *beg * 2;
        *beg++;
    }
    for (auto i : scores) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
