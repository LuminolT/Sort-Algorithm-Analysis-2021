#include <iostream>
#include "Dataset.h"


int main(){
    Dataset dataa;
    dataa.setDataSize(255);
    dataa.getGaussDistribution(int(1.0));
    for(int i = 0; i < 255; ++i){
        std::cout << std::get<int>(dataa.data[i]) << ' ';
    }
    dataa.data.clear();
    std::cout << "\n\n";

    dataa.getGaussDistribution(double(1.0));
    for(int i = 0; i < 255; ++i){
        std::cout << std::get<double>(dataa.data[i]) << ' ';
    }
    dataa.data.clear();
    std::cout << "\n\n";

    dataa.getUniformRealDistribution(int(1.0));
    for(int i = 0; i < 255; ++i){
        std::cout << std::get<int>(dataa.data[i]) << ' ';
    }
    dataa.data.clear();
    std::cout << "\n\n";
    dataa.getUniformRealDistribution(double(1.0));
    for(int i = 0; i < 255; ++i){
        std::cout << std::get<double>(dataa.data[i]) << ' ';
    }
    return 0;
    //yzp
    //myyyyyyy
    //SJCCCCCCC
}