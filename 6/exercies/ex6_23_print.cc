#include <iostream>
#include "Chapter6.h"
#include <iterator>


void print(const int *cp){
    if (cp) {
        while (*cp) {
        std::cout << *cp++ << std::endl;
        }
    } else {
        std::cout << "不接受空指针" << std::endl;
    }
}

void print(const int *beg, const int *end){
    while (beg != end) {
        std::cout << *beg++ << std::endl;
    }
}

void print(const int ia[], size_t size){
    for (size_t i = 0; i != size; i++) {
        std::cout << ia[i] << std::endl;
    }
}
