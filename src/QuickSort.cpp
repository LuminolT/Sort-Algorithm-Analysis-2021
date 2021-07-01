//
// Created by admin on 2021/6/23.
//

#include "QuickSort.h"
#include <stack>
using namespace std;
void QuickSort :: Qs(int left, int right)
{
    if(left>=right)
    {
        return;
    }
    var x;
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
    setStartTime();
    Qs(0,size);
    setEndTime();
}













void QuickSort::getMedianOfThreePivot(int low, int high)
{
    //主要是利用三元区中值，随机的获取数组中的一个元素做为枢纽元
    int mid = (low + high) / 2;
    //首先把三元素中的最小的元素交换到中间
    if (data[low] < data[mid])
        swap(data[low], data[mid]);
    if (data[high] < data[mid])
        swap(data[high], data[mid]);
    //在比较两个较大的元素，把最小的放到最左边位置，即为三数中值
    if (data[high] < data[low])
        swap(data[high], data[low]);
}
vector<int> QuickSort ::getPartition(int low, int high)
{
    var keyVal;
    getMedianOfThreePivot(low, high);//转换枢纽元
    int tmpLow = low;
    int tmpHeight = high;

    int left = low;
    int right = high;
    int leftCommonNum = 0;//记录左侧和枢纽元相等的元素个数
    int rightCommonNum = 0;//记录右侧和枢纽元相等的元素个数

    //第一步：划分的过程中把与枢纽元相等的元素分散到数组的两端
    keyVal = data[low];
    while (low < high)
    {
        while (low < high && data[high] >= keyVal)
        {
            if (data[high] == keyVal)
            {
                swap(data[high], data[right]);//相等元素放到右端
                --right;
                ++rightCommonNum;
            }
            --high;
        }
        data[low] = data[high];
        while (low < high && data[low] <= keyVal)
        {
            if (data[low] == keyVal)
            {
                swap(data[low], data[left]);//相等元素放到左端
                ++left;
                ++leftCommonNum;
            }
            ++low;
        }
        data[high] = data[low];
    }
    data[low] = keyVal;

    //第二步：划分结束后，把与keyVal相等的元素移到枢纽轴（也就是枢纽元素）的两边
    for (int i = low -1,j = tmpLow;j < left;j++)
    {
        if (data[i] != keyVal)
            swap(data[j], data[i]);
        --i;
    }
    for (int i = low + 1, j = tmpHeight; j > right; j--)
    {
        if (data[i] != keyVal)
            swap(data[j], data[i]);
        ++i;
    }
    //计算划分区域的索引
    int partitionLeftIndex = low - 1 - leftCommonNum;
    int partitionRighttIndex = low + 1 + rightCommonNum;
    vector<int> partitionIndex;
    partitionIndex.push_back(partitionLeftIndex);
    partitionIndex.push_back(partitionRighttIndex);

    return partitionIndex;
}

void QuickSort::insertSort(int low, int high)
{
    var key;
    for (int i = low; i <= high; i++)
    {
        key = data[i];
        int j = i - 1;
        while (j >= low && key < data[j])
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}
void QuickSort ::Qsi(int low, int high)
{
    if (high - low + 1 < 10)
    {
        insertSort(low, high);
        return;
    }
    else
    {
        vector<int> partitionIndex = getPartition(low, high);
        Qsi(low, partitionIndex[0]);
        Qsi(partitionIndex[1], high);
    }
}

void QuickSort::improved()//
{
    setStartTime();
    Qsi(0,size);
    setEndTime();
}