#include <iostream>
#include "Dataset.h"
#include "BubbleSort.h"
#include "SelectSort.h"
#include "InsertSort.h"
#include "QuickSort.h"


int main() {
    Dataset data;//
    data.setDataSize(8);
    data.setData(double(1.0), GAUSS);
//    BubbleSort bs;
//    InsertSort is;
//    SelectSort ss;
    QuickSort qs;
//    std::cout <<"Bubble Sort:\n";
//    bs.test(data);
//    std::cout <<"\n\n\n";
//    std::cout <<"Insert Sort:\n";
//    is.test(data);
//    std::cout <<"\n\n\n";
//    std::cout <<"Select Sort:\n";
//    ss.test(data);
//    std::cout <<"\n\n\n";
//    std::cout <<"QuickSort:\n";
//    qs.test(data);
//    std::cout <<"\n\n\n";
//    return 0;
//    Dataset d;
//    d.setDataSize(4096);
//    d.setData(double(1.0), UNIFORM);
//    BubbleSort bs;
//    bs.test(d);
//    qs.setData(data);
//    qs.ori();
//    qs.printLog();
//
    qs.setData(data);
    qs.improved();
    qs.printLog();
    getchar();
}