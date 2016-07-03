#include <iostream>
#include <initializer_list>
#include "Chapter6.h"

using std::initializer_list;

void count(initializer_list<int> i){
    std::cout << i.size() << std::endl;
}
