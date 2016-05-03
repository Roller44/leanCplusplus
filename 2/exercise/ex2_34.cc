#include <iostream>
int main()
{
    int i = 0, &r = i;
    auto a = r; //a 是整型数
    const int ci = i, &cr = ci; // ci 是整型常量，cr 是整形常量的引用
    auto b = ci; //b 是整型数
    auto c = cr; //c 是整型数
    //auto 一般会忽略掉顶层 const，同时底层 const 得到保留
    auto d = &i; //d 是整型指针
    auto e = &ci;//e 是整型常量的指针
    //设置一个类型为 auto 的引用时，初始值中的顶层属性仍然保留
    auto &g = ci;//g 是整型常量的引用

    a = 42;
    b = 42;
    c = 42;
    //错误，d 是指针，不能这样赋值
    //d = 42;
    //错误，e 是指向常量的指针，不能这样赋值
    //e = 42;
    //错误, g 是整型常量的引用，不能对常量的引用赋值
    //g = 42;

    std::cout << "a 的值是： " << a << "\t" <<
        "b 的值是： " << b << "\t" <<
        "c 的值是： " << c << std::endl;

    return 0;
}
