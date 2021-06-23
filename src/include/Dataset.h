//
// Created by admin on 2021/6/23.
//
#include <vector>
#include <map>
#include <random>
#include <cmath>

#ifndef SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
#define SORT_ALGORITHM_ANALYSIS_2021_DATASET_H

template<typename T>

class Dataset {
public:
    void getGaussDistribution();        // ref: https://en.cppreference.com/w/cpp/numeric/random/normal_distribution
    void getUniformRealDistribution();  // ref: https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution
private:
    std::vector<T> data;
    int size;
    int *begin;
};

#endif //SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
