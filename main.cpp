#include <iostream>
#include "Dataset.h"
#include "BubbleSort.h"
#include "SelectSort.h"
#include "Sort.h"

int main() {
    Dataset data;
    data.setDataSize(255);
    data.setData(double(1.0), GAUSS);
    std::vector<std::variant<int,double>> x = data.getData();
//    for(int i = 0; i < data.getSize(); i++){
//        std::cout << 1;
//    }
    BubbleSort bs;
    bs.setData(data);
    bs.print();
    std::cout << "\n\n\n";
    bs.improved();
    bs.print();
    std::cout << "\n\n\n";
    std::cout << bs.isSorted();
    return 0;
}