//
// Created by admin on 2021/6/23.
//
#ifndef SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
#define SORT_ALGORITHM_ANALYSIS_2021_DATASET_H

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <cmath>
#include <variant>
#include "Student.h"

enum DISTRITYPE{UNIFORM, GAUSS, UPPER, LOWER};
typedef std::variant<int, double> var;

class Dataset {
public:
    void setDataSize(int size);
    template<typename T> void setData(const T &x, DISTRITYPE dis);
    int getSize();
    std::vector<var> getData();
protected:
    template<typename T> void getUniformRealDistribution(const T &x);
    template<typename T> void getGaussDistribution(const T &x);
    template<typename T> void getUpperDistribution(const T &x);
    template<typename T> void getLowerDistribution(const T &x);
    std::vector<var> data;
    int size;
};

/*
 * ref: https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution
 * ref: https://en.cppreference.com/w/cpp/numeric/random/normal_distribution
 */

template<typename T> void Dataset::setData(const T &x,DISTRITYPE dis){
    switch(dis){
        case UNIFORM:   getUniformRealDistribution(x); break;
        case GAUSS:     getGaussDistribution(x); break;
        case UPPER:     getUpperDistribution(x); break;
        case LOWER:     getLowerDistribution(x); break;
        default: break;
    }
}

template<typename T> void Dataset::getUniformRealDistribution(const T &x) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(54.0, 90.0);
    for (int n = 0; n < this->size; ++n)
        this->data.push_back((T)(dis(gen)));
}

template<typename T> void Dataset::getGaussDistribution(const T &x) {
    std::random_device rd{};
    std::mt19937 gen{rd()};
    std::normal_distribution<> dis{72.0,6.0};
    for (int n = 0; n < this->size; ++n)
        this->data.push_back((T)(dis(gen)));
}

template<typename T> void Dataset::getUpperDistribution(const T &x){
    for(T i = 0; i < this->size; ++i)
        this->data.push_back(i);
}

template<typename T> void Dataset::getLowerDistribution(const T &x){
    for(T i = this->size - 1; i >= 0; --i)
        this->data.push_back(i);
}

#endif //SORT_ALGORITHM_ANALYSIS_2021_DATASET_H
