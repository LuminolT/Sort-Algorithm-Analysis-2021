#include <iostream>
#include "Dataset.h"


int main(){
    Dataset dataa;
    dataa.setDataSize(4);
    dataa.getGaussDistribution(double(1.0));
    std::vector<double> temp = std::get<std::vector<double>>(dataa.data);
    for(int i = 0; i < 16; ++i){
        std::cout << temp[i] << '\n';
    }
    return 0;
}