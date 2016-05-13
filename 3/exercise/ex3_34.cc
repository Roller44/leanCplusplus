#include <iostream>
#include <iterator>

using std::cout;
using std::endl;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p1 = arr;
    int *p2 = &arr[6];

    cout << "执行运算之前对 p1 进行解引用：" << *p1 << endl;
    p1 += p2 - p1;
    //p2 - p1 是计算 p2 指针位置和 p1 指针位置的差值，p1 ++ ... 是对
    //p1 指针进行移动。
    cout << "执行运算之后对 p1 进行解引用：" << *p1 << endl;
    return 0;
}
