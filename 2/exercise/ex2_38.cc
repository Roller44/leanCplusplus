#include <iostream>
int main()
{
    const int a = 5;
    int b = 6;
    decltype(a) c = a;
    auto d = a;
    decltype(b) e = b;
    auto f = b;

    ++d;
    //++c;
    //出错，因为 c 是常量，这就是 decltype 和 auto
    //的区别，前者保留所有格式，后者只保留低 const

    std::cout << "a 的值是： " << a << "\n"
        << "b 的值是： " << b << "\n"
        << "c 的值是： " << c << "\n"
        << "d 的值是： " << d << "\n"
        << "e 的值是： " << e << "\n"
        << "f 的值是： " << f << std::endl;


    return 0;
}
