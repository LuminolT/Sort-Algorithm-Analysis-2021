//
// Created by admin on 2021/6/23.
//

#include "SelectSort.h"

void SelectSort::ori() {
    var temp;
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


void SelectSort::improved() {
    var temp;
    int i,j,q,k1=0,k2=0;
    for(i=1; i<size; i++)							// 循环size-1次
    {
        q=size-i;
        for(j=i; j<size; j++)
        {
            if (data[j] < data[k1])
                k1 = j;                             // 找出当前范围内"最小"元素的下标
            if (data[j] > data[k2])
                k2 = j;                                 // 找出当前范围内“最大”元素的下标
        }
        if(k1!=i-1)									// 若"最小"元素不是a[i-1]，则交换之
        {
            temp = data[k1];
            data[k1] = data[i-1];
            data[i-1] = temp;
        }
        if(k2!=q)									// 若"最大"元素不是a[q-1]，则交换之
        {
            temp = data[k2];
            data[k2] = data[q];
            data[q] = temp;
        }
        k1 = i;
        k2 = i;
    }
}
