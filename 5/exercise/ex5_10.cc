#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;

    while (cin >> ch) {
        switch (ch) {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
        }
        if (ch == '.') {
            break;
        } else {

        }
    }
    cout << "Number of vowel a or A:\t" << aCnt << endl;
    cout << "Number of vowel e or E:\t" << eCnt << endl;
    cout << "Number of vowel i or I:\t" << iCnt << endl;
    cout << "Number of vowel o or O:\t" << oCnt << endl;
    cout << "Number of vowel u or U:\t" << uCnt << endl;

    return 0;
}
