//
// Created by admin on 2021/6/23.
//
#ifndef SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
#define SORT_ALGORITHM_ANALYSIS_2021_DATASET_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <cmath>
#include <variant>
#include "Student.h"

const unsigned long long MAXN = 1e9+7;

class Dataset {
public:
    void setDataSize(int size);
    template<typename T> void getUniformRealDistribution(const T &x) {
        std::random_device rd;                  //Will be used to obtain a seed for the random number engine
        std::mt19937 gen(rd());                 //Standard mersenne_twister_engine seeded with rd()
        std::uniform_real_distribution<> dis(54.0, 90.0);
        for (int n = 0; n < this->size; ++n) {
            this->data.push_back((T)(dis(gen)));
        }
    }
    // ref: https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution

    template<typename T> void getGaussDistribution(const T &x) {
        std::vector<T> temp;
        std::random_device rd{};
        std::mt19937 gen{rd()};
        std::normal_distribution<> dis{72.0,6.0};
        for (int n = 0; n < this->size; ++n) {
            this->data.push_back((T)(dis(gen)));
        }
    }
    // ref: https://en.cppreference.com/w/cpp/numeric/random/normal_distribution


    std::vector<std::variant<int, double>> data;
//    std::vector<double> dataaa;
private:
    int size;
};

#endif //SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
