//
// Created by admin on 2021/6/23.
//

#include "BubbleSort.h"

void BubbleSort::ori() {
    var temp; // 定义一个局部变量，数据类型与形式数据类型相同
    int i, j;
    setStartTime();
    for (i = 1; i < size; i++) // 共进行 size-1 轮比较和交换
    {
        for (j = 0; j < size - i; j++) {
            addCmpTimes();
            if (data[j] > data[j + 1]) // 相邻元素之间比较，必要时
            {
                addSwapTimes();
                temp = data[j]; // 交换 a[j] 与 a[j+1]
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    setEndTime();
}

void BubbleSort::improved() {
    int left = 0;
    int right = size- 1;
    var temp;
    setStartTime();
    while (left < right) {
        for (int i = left; i < right; i++) {
            addCmpTimes();
            if (data[i] > data[i + 1]) {
                addSwapTimes();
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
        right--;
        for (int j = right; j > left; j--) {
            addCmpTimes();
            if (data[j] < data[j - 1]) {
                addSwapTimes();
                temp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = temp;
            }
        }
        left++;
    }
    setEndTime();
}

