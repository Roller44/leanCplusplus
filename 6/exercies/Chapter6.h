#include <initializer_list>
using std::initializer_list;

#ifndef FACT
#define FACT
int fact(int val);
#endif

#ifndef POINT
#define POINT
void exchange(int *p1, int *p2);
#endif

#ifndef QUOTE
#define QUOTE
void exchange(int &q1, int &q2);
#endif

#ifndef POINTCOMPARE
#define POINTCOMPARE
void point_compare(int v1, int *ip);
#endif

#ifndef POINTEXCHANGE
#define POINTEXCHANGE
void point_exchange(int *p1, int *p2);
#endif

#ifndef PRINT_ONE
#define PRINT_ONE
void print(const int *cp);
#endif

#ifndef PRINT_TWO
#define PRINT_TWO
void print(const int *beg, const int *end);
#endif

#ifndef PRINT_THREE
#define PRINT_THREE
//void print(const int ia[], size_t size);
#endif

#ifndef COUNT
#define COUNT
void count(initializer_list<int> i);
#endif
