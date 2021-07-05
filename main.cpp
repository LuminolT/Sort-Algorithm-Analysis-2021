#include <iostream>
#include "test.h"

int size[] = {8};

int main() {
    std::cout << "UNIFORM\n";
    Test test;
    for(auto i : size) {
        std::cout << i << '\n';
        test.startTest(i, UNIFORM);
    }
    std::cout << "GAUSS\n";
//    for(auto i : size) {
//        std::cout << i << '\n';
//        test.startTest(i, GAUSS);
//    }
//    std::cout << "UPPER\n";
//    for(auto i : size) {
//        std::cout << i << '\n';
//        test.startTest(i, UPPER);
//    }
//    std::cout << "UPPER\n";
//    for(auto i : size) {
//        std::cout << i << '\n';
//        test.startTest(i, LOWER);
//    }
    return 0;
}