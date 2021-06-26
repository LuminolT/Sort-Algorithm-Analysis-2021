#include <iostream>
#include "Dataset.h"
#include "BubbleSort.h"
#include "Sort.h"

int main(){
    BubbleSort bs;
    bs.data.setDataSize(1024);
    bs.data.getGaussDistribution(double(1));
    for(int i = 0; i < 1024; i++){
        std::cout << std::get<double>(bs.data.data[i]) << " ";
    }
    std::cout << std::endl << std::endl;
    std::vector<std::variant<int,double>> temp = bs.ori();
    for(int i = 0; i < 1024; i++){
        std::cout << std::get<double>(temp[i]) << " ";
    }

}