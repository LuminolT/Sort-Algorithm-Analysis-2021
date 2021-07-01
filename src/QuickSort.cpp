//
// Created by admin on 2021/6/23.
//

#include "QuickSort.h"
/*void QuickSort :: Qs(int left, int right)
{
    std::variant<int,double> x;
    int i = left;
    int j = right;
    x = data[left];
    while (i < j)
    {
        while(i < j && data[j]>=x) // 从右向左找第一个小于x的数
            j--;
        if(i < j)
            data[i++] = data[j];
        while(i < j && data[i]<x) // 从左向右找第一个大于等于x的数
            i++;
        if(i < j)
            data[j--] = data[i];
    }
    data[i] = x;
    Qs(left, i - 1); // 递归调用
    Qs( i + 1, right);
}
void QuickSort::ori()
{
    Qs(0,size);
}*/
int QuickSort::getPartition(int low, int high)
{
    std::variant<int,double> keyVal;
    keyVal = data[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {

        if (data[j] <= keyVal)
        {
            i = i + 1;
            swap(data[i], data[j]);
        }
    }
    swap(data[i + 1], data[high]);
    return i+1;
}

void QuickSort::Qsi(int left, int right)
{
    if (left<right)
    {
        int mid = getPartition(left, right);
        Qsi(left, mid-1);
        Qsi(mid + 1, right);
    }
}
void QuickSort::improved()
{
    Qsi(0,size);
}