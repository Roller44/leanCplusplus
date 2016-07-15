#include <string>

using std::string;

using arrT = string[10];
arrT& func();

auto func() -> string(&)[10];

string tmp[10];
decltype(tmp) &func();
