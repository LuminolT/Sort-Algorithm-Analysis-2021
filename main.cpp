#include <iostream>
#include "test.h"
#include "sortwindow.h"
#include <QApplication>

int size[] = {8, 1024};

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow sw;
    sw.show();
    getchar();
    std::cout << "UNIFORM\n";
    Test test;
//    for(auto i : size) {
//        std::cout << i << '\n';
//        test.startTest(i, UNIFORM);
//    }
//    std::cout << "GAUSS\n";
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
    return a.exec();
}