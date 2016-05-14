#include <cstddef>

int main()
{
    constexpr size_t rowCnt = 3, conlCnt = 4;
    int ia[rowCnt][conlCnt];
    size_t cnt = 0;

    for (auto &row : ia) {
        for (auto &col : row) {
            col = cnt;
            ++cnt;
        }
    }
    return 0;
}
