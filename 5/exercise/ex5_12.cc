#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch;
    string line;

    while (getline(cin, line)) {
        for (auto st = line.begin(); st != line.end(); ++st) {
            switch (*st) {
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
            case 'f':
                switch (*(st + 1)) {
                    case 'f':
                         ++ffCnt;
                         break;
                    case 'l':
                         ++flCnt;
                         break;
                    case 'i':
                         ++fiCnt;
                         break;
                }
            default:
                break;
            }
        }
    cout << "Number of vowel a or A:\t" << aCnt << endl;
    cout << "Number of vowel e or E:\t" << eCnt << endl;
    cout << "Number of vowel i or I:\t" << iCnt << endl;
    cout << "Number of vowel o or O:\t" << oCnt << endl;
    cout << "Number of vowel u or U:\t" << uCnt << endl;
    cout << "Number of \"ff\":\t" << ffCnt << endl;
    cout << "Number of \"fl\":\t" << flCnt << endl;
    cout << "Number of \"fi\":\t" << fiCnt << endl;
    }

    return 0;
}
