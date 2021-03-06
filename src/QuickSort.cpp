//
// Created by admin on 2021/6/23.
//

#include "QuickSort.h"
using namespace std;
void QuickSort :: Qs(int left, int right) {
    addCmpTimes();
    if(left>=right){
        return;
    }
    var x;
    addSwapTimes();
    int i = left;
    int j = right;
    x = data[left];
    addCmpTimes();
    while (i < j) {
        addCmpTimes();
        while(i < j && data[j]>=x)
            j--;
        addCmpTimes();
        if(i < j)
            data[i++] = data[j];
        addCmpTimes();
        while(i < j && data[i]<x)
            i++;
        addCmpTimes();
        if(i < j)
            data[j--] = data[i];
    }
    data[i] = x;
    Qs(left, i - 1);
    Qs( i + 1, right);
}
void QuickSort::origin() {
    setStartTime();
    Qs(0,size);
    setEndTime();
}

void QuickSort::getMedianOfThreePivot(int low, int high)
{

    int mid = (low + high) / 2;
    addCmpTimes();
    if (data[low] < data[mid]) {
        addSwapTimes();
        swap(data[low], data[mid]);
    }
    addCmpTimes();
    if (data[high] < data[mid]) {
        addSwapTimes();
        swap(data[high], data[mid]);
    }
    addCmpTimes();
    if (data[high] < data[low]) {
        addSwapTimes();
        swap(data[high], data[low]);
    }
}

vector<int> QuickSort ::getPartition(int low, int high)
{
    var keyVal;
    getMedianOfThreePivot(low, high);
    int tmpLow = low;
    int tmpHeight = high;

    int left = low;
    int right = high;
    int leftCommonNum = 0;
    int rightCommonNum = 0;


    keyVal = data[low];
    addCmpTimes();
    while (low < high)
    {
        addCmpTimes();
        while (low < high && data[high] >= keyVal)
        {
            addCmpTimes();
            if (data[high] == keyVal)
            {
                addSwapTimes();
                swap(data[high], data[right]);
                --right;
                ++rightCommonNum;
            }
            --high;
        }
        data[low] = data[high];
        addCmpTimes();
        while (low < high && data[low] <= keyVal)
        {
            addCmpTimes();
            if (data[low] == keyVal)
            {
                addSwapTimes();
                swap(data[low], data[left]);
                ++left;
                ++leftCommonNum;
            }
            ++low;
        }
        data[high] = data[low];
    }
    data[low] = keyVal;

    for (int i = low -1,j = tmpLow;j < left;j++)
    {
        addCmpTimes();
        if (data[i] != keyVal) {
            addSwapTimes();
            swap(data[j], data[i]);
        }
        --i;
    }
    for (int i = low + 1, j = tmpHeight; j > right; j--)
    {
        addCmpTimes();
        if (data[i] != keyVal) {
            addSwapTimes();
            swap(data[j], data[i]);
        }
        ++i;
    }
    int partitionLeftIndex = low - 1 - leftCommonNum;
    int partitionRightIndex = low + 1 + rightCommonNum;
    vector<int> partitionIndex;
    partitionIndex.push_back(partitionLeftIndex);
    partitionIndex.push_back(partitionRightIndex);

    return partitionIndex;
}

void QuickSort::insertSort(int low, int high)
{
    var key;
    for (int i = low; i <= high; i++)
    {
        key = data[i];
        int j = i - 1;
        addCmpTimes();
        while (j >= low && key < data[j])
        {
            addSwapTimes();
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

void QuickSort ::Qsi(int low, int high) {
    if (low > high)    //added
        return;         //added
    if (high - low + 1 < 10) {
        insertSort(low, high);
        return;
    }
    else {
        vector<int> partitionIndex = getPartition(low, high);
        Qsi(low, partitionIndex[0]);
        Qsi(partitionIndex[1], high);
    }
}

void QuickSort::improved() {
    setStartTime();
    Qsi(0,size);
    setEndTime();
}

void QuickSort::Qsii(int low, int high) {
    if (low >= high) return;
    if (high - low <= 10) {
        for (auto i = low; i <= high; i++) {
            auto key = data[i];
            auto j = i - 1;
            while (j >= low && key < data[j]) {
                addCmpTimes();
                addSwapTimes();
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = key;
        }
    } else {
        addSwapTimes();
        swap(data[low], data[low + rand() % (high - low + 1)]);
        auto key = data[low];
        auto i = low, j = low;
        auto k = high;
        while (i <= k) {
            addCmpTimes();
            if (data[i] < key) {
                swap(data[i], data[j]);
                addSwapTimes();
                i++, j++;
            } else if (data[i] > key) {
                swap(data[i], data[k]);
                addSwapTimes();
                k--;
            } else {
                i++;
            }
        }
        Qsii(low, j);
        Qsii(k + 1, high);
    }
}

void QuickSort::improved_plus() {
    setStartTime();
    Qsii(0, size);
    setEndTime();
}