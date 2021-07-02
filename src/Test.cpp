//
// Created by Admin on 2021/7/3.
//
#include "Test.h"

int Test::startTest(int size, DISTRITYPE dis){
    data0.setDataSize(size);
    data0.setData(double(0), dis);
    setAllData();
    testOrigin();
    printAllLogs();
    setAllData();
    testImproved();
    printAllLogs();
    return 0;
}

void Test::setAllData(){
    bs.setData(data0);
    is.setData(data0);
    ss.setData(data0);
    qs.setData(data0);
}

void Test::testOrigin(){
    bs.origin();
    is.origin();
    ss.origin();
    qs.origin();
}

void Test::testImproved(){
    bs.improved();
    is.improved();
    ss.improved();
    qs.improved();
}

void Test::printAllLogs(){
    std::cout << "Bubble Sort:\n";
    bs.printLog();
    std::cout << "Insert Sort:\n";
    is.printLog();
    std::cout << "Select Sort:\n";
    ss.printLog();
    std::cout << "Quick Sort:\n";
    qs.printLog();
}

