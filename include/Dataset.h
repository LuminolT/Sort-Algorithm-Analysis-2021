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
//        if (std::get<std::vector<T>>(this->data).size() != 0)
//            std::get<std::vector<T>>(this->data).clear();
        std::random_device rd;                  //Will be used to obtain a seed for the random number engine
        std::mt19937 gen(rd());                 //Standard mersenne_twister_engine seeded with rd()
        std::uniform_real_distribution<> dis(54.0, 90.0);
        for (int n = 0; n < this->size; ++n) {
            std::get<std::vector<T>>(this->data).push_back((T)(dis(gen)));
        }
//        std::cout << ((T)(dis(gen)));
    }
    // ref: https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution

    template<typename T> std::vector<T> getGaussDistribution(const T &x) {
//        if (std::get<std::vector<T>>(this->data).size() != 0)
//            std::get<std::vector<T>>(this->data).clear();
        std::vector<T> temp;
        std::random_device rd{};
        std::mt19937 gen{rd()};
//        std::normal_distribution<> d{72.0,6.0};
//        for (int n = 0; n < this->size; ++n) {
//            temp.push_back((d(gen)));
//        }
//        std::get<std::vector<T>>(this->data) = temp;
//        return temp;
        std::normal_distribution<> d{72.0,6.0};
        for (int n = 0; n < this->size; ++n) {
            this->dataaa.push_back((d(gen)));
        }
    }
    // ref: https://en.cppreference.com/w/cpp/numeric/random/normal_distribution
    std::variant<std::vector<int>, std::vector<double>> data;
    std::vector<double> dataaa;
private:
    int size;
};

#endif //SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
