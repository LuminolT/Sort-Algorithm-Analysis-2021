//
// Created by Admin on 2021/6/26.
//

#ifndef SORT_ALGORITHM_ANALYSIS_2021_SORT_H
#define SORT_ALGORITHM_ANALYSIS_2021_SORT_H

#include "Dataset.h"

class Sort {
public:
    void ori();             //original sort algorithm
    void improved();        //improved sort algorithm
    void print();           //print the sorted vector
    void show();            //visualized sort show
    bool isSorted();        //check the vector is sorted or not
private:
    Dataset data;           //contains the sort data
};


#endif //SORT_ALGORITHM_ANALYSIS_2021_SORT_H
