//
// Created by Admin on 2021/7/3.
//

#ifndef SORT_ALGORITHM_ANALYSIS_2021_TEST_H
#define SORT_ALGORITHM_ANALYSIS_2021_TEST_H

#include "BubbleSort.h"
#include "SelectSort.h"
#include "InsertSort.h"
#include "QuickSort.h"

class Test{
public:
    int startTest(int size, DISTRITYPE dis);
protected:
    void setAllData();
    void testOrigin();
    void testImproved();
    void printAllLogs();
    Dataset data0;      // for original data
    BubbleSort bs;
    SelectSort ss;
    InsertSort is;
    QuickSort qs;
};


#endif //SORT_ALGORITHM_ANALYSIS_2021_TEST_H
