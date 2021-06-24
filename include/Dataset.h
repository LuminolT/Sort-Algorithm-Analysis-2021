//
// Created by admin on 2021/6/23.
//
#ifndef SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
#define SORT_ALGORITHM_ANALYSIS_2021_DATASET_H

#include <vector>
#include <map>
#include <random>
#include <cmath>
#include <variant>
#include "Student.h"

const unsigned long long MAXN = 1e9+7;
std::variant<std::vector<int>, std::vector<double>, std::vector<Student>, std::vector<std::string>> var;

class Dataset {
public:
    void setDataSize(int size);
    void getGaussDistribution();        // ref: https://en.cppreference.com/w/cpp/numeric/random/normal_distribution
    void getUniformRealDistribution();  // ref: https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution
private:
    std::vector<double> data;
    int size;
};

#endif //SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
