#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {1, 2, 3};
    vector<int> vec3 = {1, 3};
    int *begone = &vec1[0];
    int *endone = &vec1[vec1.size()];
    int *begtwo = &vec2[0];
    int *endtwo = &vec2[vec2.size()];
    int *begthree = &vec3[0];
    int *endthree = &vec3[vec3.size()];

    while (*begone == *begtwo && begone != endone && begtwo != endtwo) {
        cout << "相等" << endl;
        ++begone;
        ++begtwo;
    }
    begone = &vec1[0];
    while (*begone == *begthree && begone != endone && begthree != endthree) {
        cout << "相等" << endl;
        ++begone;
        ++begthree;
    }

    return 0;
}
