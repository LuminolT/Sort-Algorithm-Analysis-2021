//
// Created by admin on 2021/6/23.
//

#include "SelectSort.h"

void SelectSort::ori() {
    var temp;
    int i, j, k=0;
    setStartTime();
    for(i=1; i<size; i++)							// 循环size-1次
    {
        for(j=i; j<size; j++) {
            addCmpTimes();
            if (data[j] < data[k])
                k = j;                              // 找出当前范围内"最小"元素的下标
        }
        if(k!=i-1)									// 若"最小"元素不是a[i-1]，则交换之
        {
            addSwapTimes();
            temp = data[k];
            data[k] = data[i-1];
            data[i-1] = temp;
        }
        k = i;
    }
    setEndTime();
}


void SelectSort::improved() {
    int min = 0;	// 当前待排序的数据中最小值的下标
    int max = 0; 	// 当前待排序的数据中最小值的下标
    int j = 0;		// 内层循环（移动数据）计数变量
    int k = size;   // 记录已排序空间中最大值的交换位
    var temp;		// 用于数据交换的临时变量
    // 对未排序区间进行遍历 (每次更新头尾的位置)
    setStartTime();
    for (int i = 0; i < k; ++i,--k)
    {
        min = i;
        max = i;    // 在未排序区间中查找最小值和最小值
        for (j = i+1; j < k; ++j)
        {
            addCmpTimes();
            if (data[j] < data[min])
            {
                min = j;// 更新最小值下标
            }
            if (data[j] > data[max])
            {
                max = j;// 更新最大值下标
            }
        }
        if (min != i)
        {
            addSwapTimes();
            temp = data[i];// 数据交换-最小值
            data[i] = data[min];
            data[min] = temp;
        }
        if (max == i)
        {
            max = min;// 防止之前的已经被换掉
        }
        if (max != k-1)
        {
            addSwapTimes();
            temp = data[k-1];// 数据交换-最大值
            data[k-1] = data[max];
            data[max] = temp;
        }
    }
    setEndTime();
}
