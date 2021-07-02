//
// Created by Admin on 2021/6/26.
//

#ifndef SORT_ALGORITHM_ANALYSIS_2021_SORT_H
#define SORT_ALGORITHM_ANALYSIS_2021_SORT_H

#include <time.h>
#include "Dataset.h"

class Sort {
public:
    virtual void origin();             //original sort algorithm
    virtual void improved();        //improved sort algorithm
    void setData(Dataset &data);    //set the data
    void print();                   //print the data
    void show();                    //visualized sort show
    std::string isSorted();                //check the vector is sorted or not
    void setStartTime();
    void setEndTime();
    double getTime();
    void addSwapTimes();
    void addCmpTimes();
    ull getSwapTimes();
    ull getCmpTimes();
    void clearTimes();
    void printLog();
    void test(Dataset &data);
protected:
    std::vector<var> data;
    int size;
    clock_t start = 0;
    clock_t end = 0;
    ull swapTimes = 0;
    ull cmpTimes = 0;
};


#endif //SORT_ALGORITHM_ANALYSIS_2021_SORT_H
