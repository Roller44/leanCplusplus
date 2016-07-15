#include <string>

using std::string;

#ifndef STRINGARRAY
#define STRINGARRAY
string (&func()) [10];
#endif
