#include <iostream>
int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;

    std::cout << "a 的值是： " << a << "\n"
        << "b 的值是： " << b << "\n"
        << "c 的值是： " << c << "\n"
        << "d 的值是： " << d << std::endl;

    return 0;
}
