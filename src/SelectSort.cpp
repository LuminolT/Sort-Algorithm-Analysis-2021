//
// Created by admin on 2021/6/23.
//

#include "SelectSort.h"

void SelectSort::ori() {
    std::variant<int,double> temp;
    int i, j, k=0;
    for(i=1; i<size; i++)							// 循环size-1次
    {
        for(j=i; j<size; j++)
            if(data[j] < data[k])
                k = j;								// 找出当前范围内"最小"元素的下标
        if(k!=i-1)									// 若"最小"元素不是a[i-1]，则交换之
        {
            temp = data[k];
            data[k] = data[i-1];
            data[i-1] = temp;
        }
        k = i;
    }
}