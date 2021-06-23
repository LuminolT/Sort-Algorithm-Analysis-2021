#include <iostream>
#include "Dataset.h"

int main(){
    std::cout << 1;
    Dataset dataa;
    dataa.setDataSize(10000);
    dataa.getGaussDistribution();
    for(int i = 0; i < 10000; ++i){
        std::cout << dataa.data[i] << '\n';
    }
    return 0;
}