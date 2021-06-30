//
// Created by admin on 2021/6/23.
//

#ifndef SORT_ALGORITHM_ANALYSIS_2021_QUICKSORT_H
#define SORT_ALGORITHM_ANALYSIS_2021_QUICKSORT_H

#include "Sort.h"

class QuickSort : public Sort{
public:
    void ori() override;
    //void improved() override;
    void Qs(int left,int right);
};


#endif //SORT_ALGORITHM_ANALYSIS_2021_QUICKSORT_H
