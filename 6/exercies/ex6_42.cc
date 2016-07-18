#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string make_plural(size_t ctr, const string &word, const string &ending = "es")
{
    return (ctr > 1) ? word + ending : word;
}

int main(int argc, char const* argv[])
{
    cout << make_plural(2, "success") << endl;
    cout << make_plural(2, "failure", "s") << endl;

    return 0;
}
