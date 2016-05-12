#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto it = scores.begin();

    while (cin >> grade) {
        *(it + grade/10) = *(it + grade/10) + 1;
    }
    for (auto i : scores) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
