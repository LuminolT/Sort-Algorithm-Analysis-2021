//
// Created by admin on 2021/6/23.
//

#include "BubbleSort.h"

void BubbleSort::ori(){
    std::variant<int,double> temp; // 定义一个局部变量，数据类型与形式数据类型相同
    int i, j;
    for (i = 1; i < size; i++) // 共进行 size-1 轮比较和交换
    {
        for (j = 0; j < size - i; j++) {
            if (data[j] > data[j + 1]) // 相邻元素之间比较，必要时
            {
                temp = data[j]; // 交换 a[j] 与 a[j+1]
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void BubbleSort::improved() {

        int i = 0;
        int j = 0;
        int n = 0;//同时找最大值的最小需要两个下标遍历
        int flag = 0;
        int pos = 0;//用来记录最后一次交换的位置
        int k = size - 1;
        for (i = 0; i < size - 1; i++)//确定排序趟数
        {
            pos = 0;
            flag = 0;
            //正向寻找最大值
            for (j = n; j < k; j++)//确定比较次数
            {
                if (data[j] > data[j + 1])
                {
                    //交换
                    std::variant<int,double>
                            tmp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = tmp;
                    flag = 1;//加入标记
                    pos = j;//交换元素，记录最后一次交换的位置
                }
            }
            if (flag == 0)//如果没有交换过元素，则已经有序,直接结束
            {
                return;
            }
            k = pos;//下一次比较到记录位置即可
            //反向寻找最小值
            for (j = k; j > n; j--)
            {
                std::variant<int,double> tmp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = tmp;
                flag = 1;
            }
            n++;
            if (flag == 0)//如果没有交换过元素，则已经有序,直接结束
            {
                return;
            }
        }
}