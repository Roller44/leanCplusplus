#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spCnt = 0, tabCnt = 0, enCnt = 0;
    char ch;
    string line;

    while (getline(cin, line)) {
        ++enCnt;
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
            default:
                break;
            }
            if ((*st) == ' ') {
                ++spCnt;
            } else {
                if ((*st) == '\t') {
                    ++tabCnt;
                } else {
                    
                }
            }
        }
    cout << "Number of vowel a or A:\t" << aCnt << endl;
    cout << "Number of vowel e or E:\t" << eCnt << endl;
    cout << "Number of vowel i or I:\t" << iCnt << endl;
    cout << "Number of vowel o or O:\t" << oCnt << endl;
    cout << "Number of vowel u or U:\t" << uCnt << endl;
    cout << "Number of space:\t" << spCnt << endl;
    cout << "Number of tab:\t" << tabCnt << endl;
    cout << "Number of enter:\t" << enCnt << endl;
    }

    return 0;
}
