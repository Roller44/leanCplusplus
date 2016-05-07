#include <iostream>
#include <vector>

using std::cin;
using std::vector;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            ++scores[grade/10];
            //将对应分数段的计数加 1
            //相等于：
            //auto ind = grade/10;
            //scores[ind] = scores[ind] + 1;
        } else {

        }
    }

    return 0;
}
