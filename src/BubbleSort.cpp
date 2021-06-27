//
// Created by admin on 2021/6/23.
//

#include "BubbleSort.h"

void BubbleSort::ori(){
    std::variant<int,double> temp; // 定义一个局部变量，数据类型与形式数据类型相同
    int i, j;
    for (i = 1; i < size; i++) // 共进行 size-1 轮比较和交换
    {
        for (j = 0; j < size - i; j++) {
            if (data[j] > data[j + 1]) // 相邻元素之间比较，必要时
            {
                temp = data[j]; // 交换 a[j] 与 a[j+1]
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void BubbleSort::improved() {
}