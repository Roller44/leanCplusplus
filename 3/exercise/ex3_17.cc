#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    cout << "输入一组词，输入完成后以“--end”为命令输出结果:" << endl;
    string input, word;
    vector<string> words;

    while (getline(cin, input)) {
        for (decltype(input.size()) i = 0; i != input.size(); ++i) {
            if (isspace(input[i])) {
                words.push_back(word);
                word = "";
            } else {
                word += toupper(input[i]);
            }
        }
        words.push_back(word);
        for (auto i : words) {
            cout << i << endl;
        }
    }

    return 0;
}
