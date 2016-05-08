#include <vector>

using std::vector;

int main()
{
    vector<int> vec1(10 ,42);
    vector<int> vec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> vec3;
    for (int i = 0; i != 9; i++) {
        vec3.push_back(42);
    }

    return 0;
}
