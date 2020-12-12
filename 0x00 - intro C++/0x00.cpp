/* Copyright 2020 <alejolo311> */

/* Function overloading */

#include <iostream>
#include "intro.hpp"


void toa(int32_t value) {
    std::cout << value << " is a int" << std::endl;
}
void toa(int16_t value) {
    std::cout << value << " is a short" << std::endl;
}
void toa(uint16_t value) {
    std::cout << value << " is a unsigned short" << std::endl;
}


int main() {
    int32_t a = 1;
    int16_t b = 2;
    uint16_t c = 3;


    toa(a);
    toa(b);
    toa(c);
}
