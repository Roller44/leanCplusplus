#include <string>
#include <vector>

using std::string;

int main()
{
    std::vector<string>::iterator iter;
    *iter++;
    (*iter)++;
    *iter.empty();
    iter->empty();
    ++*iter;
    iter++->empty();

    return 0;
}
