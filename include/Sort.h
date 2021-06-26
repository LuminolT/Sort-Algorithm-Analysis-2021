//
// Created by Admin on 2021/6/26.
//

#ifndef SORT_ALGORITHM_ANALYSIS_2021_SORT_H
#define SORT_ALGORITHM_ANALYSIS_2021_SORT_H

#include <time.h>
#include "Dataset.h"

class Sort {
public:
    virtual void ori();             //original sort algorithm
    virtual void improved();        //improved sort algorithm
    void setData(Dataset &data);    //set the data
    void print();                   //print the data
    void show();                    //visualized sort show
    bool isSorted();                //check the vector is sorted or not
    double calcTime();              //calculate the running
protected:
    std::vector<std::variant<int, double>> data;
    int size;
    clock_t start;
    clock_t end;
};


#endif //SORT_ALGORITHM_ANALYSIS_2021_SORT_H
