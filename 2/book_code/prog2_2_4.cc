#include <iostream>
int reused = 42;
int main()
{
    int unique = 0;
    std::cout << reused << " " << unique << std::endl;
    int reused = 0;
    std::cout << reused << " " << unique << std::endl;
    std::cout << ::reused << " " << unique << std::endl;
    // 使用作用域操作符，因为全局作用域本身没有名字，所以作用域操作符
    // 的左侧为空时，想全局作用域发出请求获取作用域操作符右侧名字对应
    // 的变量
    return 0;
}
