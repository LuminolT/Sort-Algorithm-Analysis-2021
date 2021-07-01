//
// Created by admin on 2021/6/23.
//

#include "QuickSort.h"
#include <stack>
using namespace std;

void QuickSort :: Qs(int left, int right) {
    if(left >= right)
        return;
    var x;
    int i = left;
    int j = right;
    x = data[left];
    while (i < j){
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
void QuickSort::ori(){
    setStartTime();
    Qs(0,size);
    setEndTime();
}

int QuickSort::getPartition(int low, int high)
{
    var keyVal;
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
/*
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
}*/
void QuickSort::Qsi(int left, int right)
{
    stack<int> s;
    if (left<right)
    {
        int mid = getPartition(left, right);
        if (mid-1>left)
        {
            s.push(left);
            s.push(mid - 1);
        }
        if (mid+1<right)
        {
            s.push(mid + 1);
            s.push(right);
        }

        while (!s.empty())
        {
            int qHeight = s.top();
            s.pop();
            int pLow = s.top();
            s.pop();
            int pqMid = getPartition(pLow, qHeight);
            if (pqMid - 1 > pLow)
            {
                s.push(pLow);
                s.push(pqMid - 1);
            }
            if (pqMid + 1 < qHeight)
            {
                s.push(pqMid + 1);
                s.push(qHeight);
            }
        }

    }
}
void QuickSort::improved()
{
    Qsi(0,size);
}