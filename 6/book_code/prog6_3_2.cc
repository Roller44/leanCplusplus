#include <iostream>
#include "string"

using std::cout;
using std::endl;
using std::string;

char &get_val(string &str, string::size_type ix){
    return str[ix];
}

int factorial(int val){
    if (val > 1) {
        return factorial(val -1) * val;
    }

    return 1;
}

int main()
{
    string s("a value");
    cout << s << endl;
    get_val(s, 0)  = 'A';
    cout << s << endl;
    cout << factorial(5) << endl;

    return 0;
}
