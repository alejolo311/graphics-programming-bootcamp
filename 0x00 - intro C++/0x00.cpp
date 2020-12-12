/* Function overloading */

#include <iostream>
#include "intro.hpp"


void toa(int value){
    std::cout << value << " is a int" << std::endl;
}
void toa(long value){
    std::cout << value << " is a long" << std::endl;
}
void toa(unsigned long value){
    std::cout << value << " is a unsigned long" << std::endl;
}


int main() {

    int a = 1; 
    long b = 2; 
    unsigned long c = 3; 
    toa(a);
    toa(b);
    toa(c);
}