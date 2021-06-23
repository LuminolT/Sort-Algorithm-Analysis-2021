//
// Created by admin on 2021/6/23.
//
#include <vector>

#ifndef SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
#define SORT_ALGORITHM_ANALYSIS_2021_DATASET_H

const int MAXN = 1e9 + 7;
template<typename T>

class Dataset {
public:
    //随机生成一个神必数组
    std::vector<T> data;
    int length;
    int *begin;
};

#endif //SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
