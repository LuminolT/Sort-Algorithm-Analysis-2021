//
// Created by ASUS on 2021-06-30.
//

#include "InsertSort.h"

using namespace std;
void InsertSort::origin(){
    setStartTime();
        for(int i = 1; i < size; i++) //第一个元素作为基准元素，从第二个元素开始把其插到正确的位置
        {
            addCmpTimes();
            if(data[i] < data[i-1]) //如果第i个元素比前面的元素小
            {
                addSwapTimes();
                int j = i-1;     //需要判断第i个元素与前面的多个元素的大小，换成j继续判断
                var x = data[i]; //将第i个元素复制为哨兵
                while(j >= 0 && x < data[j]) //找哨兵的正确位置，比哨兵大的元素依次后移
                {
                    data[j+1] = data[j];
                    j--;
                }
                data[j+1] = x;  //把哨兵插入到正确的位置
            }
        }
    setEndTime();
}


void InsertSort::improved() {
    setStartTime();
    for( int i = 1 ; i < size ; i ++ ) {
        addCmpTimes();
        var e = data[i];
        int j;
        for (j = i; j > 0 && data[j-1] > e; j--){
            addSwapTimes();
            data[j] = data[j-1];
        }
        data[j] = e;
    }
    setEndTime();
}