//
// Created by admin on 2021/6/23.
//

#ifndef SORT_ALGORITHM_ANALYSIS_2021_QUICKSORT_H
#define SORT_ALGORITHM_ANALYSIS_2021_QUICKSORT_H

#include "Sort.h"

class QuickSort : public Sort{
public:
    void origin() override;
    void Qs(int left,int right);


    void improved() override;
    std::vector<int> getPartition(int low, int high);
    void getMedianOfThreePivot(int low,int high);
    void Qsi(int low,int high);
    void insertSort(int low,int high);
    void improved_plus();
    void Qsii(int low , int high);
};


#endif //SORT_ALGORITHM_ANALYSIS_2021_QUICKSORT_H
