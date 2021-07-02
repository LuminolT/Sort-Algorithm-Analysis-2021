#include <iostream>
#include "test.h"

int size[] = {1024, 4096};

int main() {
    Test test;
    std::cout << "UNIFORM\n";
    for(auto i : size) {
        std::cout << size << '\n';
        test.startTest(i, UNIFORM);
    }
    std::cout << "GAUSS\n";
    for(auto i : size) {
        std::cout << size << '\n';
        test.startTest(i, GAUSS);
    }
    std::cout << "UPPER\n";
    for(auto i : size) {
        std::cout << size << '\n';
        test.startTest(i, UPPER);
    }
    std::cout << "UPPER\n";
    for(auto i : size) {
        std::cout << size << '\n';
        test.startTest(i, UPPER);
    }
    return 0;
}