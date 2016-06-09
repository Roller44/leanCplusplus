#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;

    while (cin >> ch) {
        if (ch == 'a') {
            ++aCnt;
        } else {
            if (ch == 'e') {
                ++eCnt;
            } else {
                if (ch == 'i') {
                    ++iCnt;
                } else {
                    if (ch == 'o') {
                        ++oCnt;
                    } else {
                        if (ch == 'u') {
                            ++uCnt;
                        } else {
                            if (ch == '.') {
                                break;
                            } else {

                            }
                        }
                    }
                }
            }
        }
    }
    cout << "'a' have: " << aCnt << endl;
    cout << "'e' have: " << eCnt << endl;
    cout << "'i' have: " << iCnt << endl;
    cout << "'o' have: " << oCnt << endl;
    cout << "'u' have: " << uCnt << endl;

    return 0;
}
