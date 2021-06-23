//
// Created by admin on 2021/6/23.
//
#ifndef SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
#define SORT_ALGORITHM_ANALYSIS_2021_DATASET_H

#include <vector>
#include <map>
#include <random>
#include <cmath>

class Dataset {
public:
    void setDataSize(int size);
    void getGaussDistribution();        // ref: https://en.cppreference.com/w/cpp/numeric/random/normal_distribution
    void getUniformRealDistribution();  // ref: https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution
    std::vector<double> data;
private:
    int size;
};

#endif //SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
