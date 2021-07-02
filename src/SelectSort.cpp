//
// Created by admin on 2021/6/23.
//

#include "SelectSort.h"

void SelectSort::origin() {
    var temp;
    int i, j, k=0;
    setStartTime();
    for(i=1; i<size; i++)							// circle (size-1) times
    {
        for(j=i; j<size; j++) {
            addCmpTimes();
            if (data[j] < data[k])
                k = j;                              // find the subscript of the smallest remaining element
        }
        if(k!=i-1)									// swap the element if it isn't the smallest one
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
    int min = 0;
    int max = 0;
    int j = 0;
    int k = size;
    var temp;
    setStartTime();
    for (int i = 0; i < k; ++i,--k)
    {
        min = i;
        max = i;    //find the subscript of the smallest and the largest remaining element
        for (j = i+1; j < k; ++j)
        {
            addCmpTimes();
            if (data[j] < data[min])
            {
                min = j;
            }
            if (data[j] > data[max])
            {
                max = j;
            }
        }
        if (min != i)
        {
            addSwapTimes();
            temp = data[i];//swap the smallest element
            data[i] = data[min];
            data[min] = temp;
        }
        if (max == i)
        {
            max = min;// prevent the largest element being swaped
        }
        if (max != k-1)
        {
            addSwapTimes();
            temp = data[k-1];// swap the largest element
            data[k-1] = data[max];
            data[max] = temp;
        }
    }
    setEndTime();
}
