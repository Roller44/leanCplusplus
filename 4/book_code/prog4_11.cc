#include <iostream>

using std::cout;
using std::endl;

int main()
{
    bool flag;
    short sval;
    int ival;
    long lval;
    float fval;
    char cval;
    unsigned short usval;
    unsigned int uival;
    unsigned long ulval;
    double dval;

    cout << "3.14159L + 'a' = " << 3.14159L + 'a' << endl;
    cout << "dval + ival = " << dval + ival << endl;
    cout << "dval + fval = " << dval + fval << endl;
    cout << "ival = dval: " << ival << endl;
    cout << "flag = dval: " << flag << endl;
    cout << "cval + fval = " << cval + fval << endl;
    cout << "sval + cval = " << sval + cval << endl;
    cout << "cval + lval = " << cval + lval << endl;
    cout << "ival + ulval = " << ival + ulval << endl;
    cout << "usval + ival = " << usval + ival << endl;
    cout << "uival + lval = " << uival + ival << endl;

    return 0;
}
