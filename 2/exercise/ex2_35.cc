#include <iostream>
int main()
{
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    std::cout << "j 的值是： " << j << "\n"
        << "k 的值是： " << k << "\n"
        << "p 的值是： " << p << "\n"
        << "j2 的值是： " << j2 << "\n"
        << "k2 的值是： " << k2 << std::endl;

    return 0;
}
