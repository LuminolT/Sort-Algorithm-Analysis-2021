#include <iostream>
#include <stack>
#include "Dataset.h"
#include "BubbleSort.h"
#include "SelectSort.h"
#include "Sort.h"
#include "QuickSort.h"

int main() {
    Dataset data;//
    data.setDataSize(255);
    data.setData(double(1.0), GAUSS);
    QuickSort bs;
    bs.setData(data);
    bs.print();
    std::cout << "\n\n\n";
    bs.improved();
    bs.print();
    std::cout << "\n\n\n";
    std::cout << "Is sorted? " << bs.isSorted() << "\n";
    std::cout << "Run time: " << bs.getTime() << "s\n";
    std::cout << "Swap times: " << bs.getSwapTimes() << "\n";
    std::cout << "Cmp times: " << bs.getCmpTimes() << "\n";
    return 0;
}