#include <string>

using std::string;

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main(int argc, char const* argv[])
{
    isShorter("aaa", "aa");

    return 0;
}
