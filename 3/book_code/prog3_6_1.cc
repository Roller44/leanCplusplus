#include <cstddef>

int main()
{
    constexpr size_t rowCnt = 3, conlCnt = 4;
    int ia[rowCnt][conlCnt];

    for (size_t i = 0; i != rowCnt; i++) {
        for (size_t j = 0; j != conlCnt; j++) {
            ia[i][j] = i * conlCnt + j;
        }
    }

    return 0;
}
